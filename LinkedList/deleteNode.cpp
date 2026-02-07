// Insert element at the end of linked list.
// 3->5->6->?

#include <iostream>
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

void printLinkedList(Node *temp)
{
    cout << "Linked List elements: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};

int main()
{

    // Node *head;
    // head = new Node(5);
    // Node *temp1 = head;

    // convert this array into linked list
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<9;i++)
    // {
    //     Node *temp = new Node(arr[i]);
    //     head->next = temp;
    //     head = temp;
    // }

    // cout<<head->data<<" "<<head->next;
    // printLinkedList(temp1);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    Node *head;
    head = NULL;
    Node *temp;

    int deleteNode = 11;

    for (int i = 0; i < 11; i++)
    {
        // Linked List not exists
        if (head == NULL)
        {
            head = new Node(arr[i]);
            temp = head;
        }
        // Linked list exists insert data at the end
        else
        {
            Node *tail = new Node(arr[i]);
            temp->next = tail;
            temp = tail;
        }
    }

    // delete node from the linkedlist.
    temp = head;
    while(temp)
    {
        if(temp->next->data == deleteNode)
        {
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    Node *dummy;
    dummy = temp->next;
    temp->next = temp->next->next;
    delete dummy;

    cout << "Print Linked List elements: ";
    printLinkedList(head);
}