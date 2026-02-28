// impelementation of queue using linkedlist
#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node *next;
    //constructor
    Node(int Value)
    {
        data = Value;
        next = NULL;
    }
};
class queue
{
    public:
   Node *front;
   Node *rear;
    // constructor ko value ko initiliaze krne ke liye use krte hai
    queue( )
    {
       front = rear =NULL;
    } 
    // check wheather queue is empty or not
    bool isempty()
    {
        return front == NULL;
    }
    //push
    void push(int value )
    {
        if(isempty())
        {
            front = new Node(value);
           rear = front;
        }
        else
        {
            rear->next = new Node(value);
            rear = rear->next;
            cout<<rear->data<<" is pushed in queue"<<endl;
        }
    };
    //pop
   // queue means (first in first out FIFO)
   void pop()
   {

     if(isempty())
      {
        cout<<"queue underflow";
        return;
      }
      else if(rear == front)
      {
        rear = front = NULL;
      }
      else
      {
        Node *temp = front;
        front = front->next;
        delete temp;
      }
   };
    //front element
    int first()
    {
        if(isempty())
        {
            cout<<"queue is empty";
            return -1;
        }
        else 
        {
            cout<<"The first element of array : "<<endl;
            return front->data;
        }

    }
};
int main()
{
    queue s;
    s.push(50);
    s.push(40);
     s.push(110);
    s.push(400);
     s.push(1210);
    s.push(440);
     s.push(4410);
    s.push(4096);
     s.push(10);
    s.push(5040);
     s.push(6010);
      s.pop();
    s.push(8040);
    cout<<s.isempty()<<endl;
    cout<<s.first()<<endl;
}