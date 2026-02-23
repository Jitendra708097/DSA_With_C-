// Given two numbers in the form of linked list.
// L1,L2 and find their sum in L3 

#include<iostream>
#include<array>  // size
using namespace std;

// Create Node 
class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Create linked list from an array 
Node *createLinkedList(int *arr,Node *head,int Size)
{
    Node *head1;
    for(int i=0;i<Size;i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
            head1 = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            head1->next = temp;
            head1 = temp;
        }
    }

    return head;
}

// print linked list 
void printLinkedList(Node *head)
{
    
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

// reverse linked list 
Node *reverse_linked_list(Node *head)
{
    Node *prev = NULL;
    Node *curr;
    Node *front;

    while(head != NULL)
    {
        curr = head->next;
        head->next = prev;
        prev = head;
        head = curr;
    }

    return prev;
}

Node *add_two_number(Node *head1, Node *head2,Node *head3)
{
    int carry = 0;
    Node *temp;
    while (head1 != NULL && head2 != NULL)
    {
        int num = head1->data + head2->data + carry;
        carry = num/10;
        if(head3 == NULL)
        {
            head3 = new Node(num%10);
            temp = head3;
        }
        else
        {
            Node *temp1 = new Node(num%10);
            temp->next = temp1;
            temp = temp1;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // for remaining element in first linked list 
    while (head1 != NULL)
    {
        int num = head1->data + carry;
        carry = num / 10;
        Node *temp2 = new Node(num % 10);
        temp->next = temp2;
        temp = temp2;
        head1 = head1->next;
    }

    // for remaining elements in second linked list 
    while (head2 != NULL)
    {
        int num = head2->data + carry;
        carry = num / 10;
        Node *temp2 = new Node(num % 10);
        temp->next = temp2;
        temp = temp2;
        head2 = head2->next;
    }

    // for carry one 
    if(carry == 1)
    {
        Node *temp2 = new Node(1);
        temp->next = temp2;
        temp = temp2;
    }

    return head3;
}

int main()
{
   int num1[4] = {9,9,9,9};
   int num2[4] = {9,9,9,9};

   Node *L1 = NULL,*L2 = NULL,*L3 = NULL;

   L1 = createLinkedList(num1,L1,4);
   L2 = createLinkedList(num2,L2,4);
//    printLinkedList(L1);
//    cout<<"Second linked list: "<<endl;
//    printLinkedList(L2);

   L1 = reverse_linked_list(L1);
   L2 = reverse_linked_list(L2);
//    cout<<endl<<"First reversed: ";
//    printLinkedList(L1);

//    cout << endl<< "second reversed: ";
//    printLinkedList(L2);
   L3 = add_two_number(L1,L2,L3);

   cout << endl<< "third reversed: ";
   printLinkedList(L3);

   L3 = reverse_linked_list(L3);
   cout<<endl<<"Resultant of num1 and num2: ";
   printLinkedList(L3);
}