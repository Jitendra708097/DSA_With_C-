// Reverse Linked list 
#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// print linked list 
void printLinkedList(Node *temp)
{
    if(temp == NULL)
    return ;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
};

// reverse linked list 
Node *reverse(Node *head)
{
    if(head == NULL)
    return 0;

    Node *temp,*prev,*nextPointer;
    temp = head;
    prev = nullptr;

    while (temp != NULL)
    {
        nextPointer = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextPointer;
    }

    return prev;
    
};

// reverse data of linkedlist 
Node *reverseData(Node *head)
{
    vector<int>temp;

    Node *dummy = head;
    while(dummy != NULL)
    {
        temp.push_back(dummy->data);
        dummy = dummy->next;
    }

    dummy = head;
    int index = 0;
    while (dummy != NULL)
    {
        dummy->data = temp[index];
        index++;
        dummy = dummy->next;
    }
    return head;
}

int main()
{
   int arr[5] = {1,2,3,4,5};
   Node *head = NULL;
   Node *temp;

for(int i=0;i<5;i++)
{
   if(head == NULL)
   {
    head = new Node(arr[i]);
    temp = head;
   }
   else
   {
    Node *tail = new Node(arr[i]);
    temp->next = tail;
    temp = tail;
   }
}

cout<<"Print linked list: ";
printLinkedList(head);

cout<<endl<<"Reverse Linked List: ";
Node *temp1 = reverse(head);

temp1 = reverseData(temp1);
printLinkedList(temp1);

}