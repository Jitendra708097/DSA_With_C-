// implementation of stack using array
#include<iostream>
using namespace std;
class stack
{
    public :
    int *arr;
    int size;
    int top;

    // constructor to initiliaze the value
    stack(int n)
    {
        size = n;
        top =-1;
        arr = new int[n];
    }
//insertion elements in stack
//push
void push(int value)
{
    if(top == size)
    {
        cout<<"stack overflow"<<endl;
    }
    else{
        top++;
        arr[top]=value;
        cout<<"The element is pushed into the stack : "<<arr[top]<<endl;
    }
};
//pop
//stack se element ko bahar niklane hai that deletion in stack
void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"The element is poped from the stack : "<<arr[top]<<endl;
        top--;
    }
};
//top
//first element of stack use hm top kahate hai
int peek()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else
    {
        cout<<"The first element of stack is to be : ";
        return arr[top];
    }
}; 
//size of stack
int Size()
{
    cout<<"The size of stack : ";
    return top+1;
}
//empty
//check wheather stack empty or not 
int empty()
{
    if(top==-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
};
int main()
{
    stack s(10);
    s.push(10);
    s.push(40);
     s.push(10);
    s.push(40);
     s.push(10);
    s.push(40);
     s.push(10);
    s.push(40);
     s.push(10);
    s.push(40);
     s.push(10);
      s.pop();
    s.push(40);
    cout<<s.empty()<<endl;
    cout<<s.Size()<<endl;
    cout<<s.peek()<<endl;
    //s.pop();
}
