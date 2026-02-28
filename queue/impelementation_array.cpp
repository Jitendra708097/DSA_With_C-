// impelementation of queue using array
#include<iostream>
using namespace std;
class queue
{
    public:
    int *arr;
    int size;
    int front ,rear;
    // constructor ko value ko initiliaze krne ke liye use krte hai
    queue(int n)
    {
        arr = new int[n];
        size = n;
        front =-1;
        rear=-1;
    } 
    // check wheather queue is empty or not
    bool isempty()
    {
        return front == -1;
    }
    bool isfull()
    {
        return rear==size-1;
    }
    //push
    void push(int value)
    {
        if(isempty())
        {
            rear = front = 0;
            arr[0] = value;
        }
        else if(isfull())
        {
            cout<<"queue overflow";
        }
        else
        {
            rear = rear+1;
            arr[rear] = value;
            cout<<arr[rear]<<" is pushed in queue"<<endl;
        }
    };
    //pop
   // queue means (first in first out FIFO)
   void pop()
   {

     if(isempty())
      {
        cout<<"queue underflow";
      }
      else if(rear == front)
      {
        rear = front = -1;
      }
      else
      {
        cout<<"element ko bahar nikal diya hai : "<<arr[front]<<endl;
        front = front+1; 
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
            return arr[front];
        }

    }
    // size of queue
    int Size()
    {
            cout<<"The size of queue : "<<endl;
            return rear+1;
    }
};
int main()
{
    queue s(10);
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
    cout<<s.Size()<<endl;
    cout<<s.first()<<endl;
}