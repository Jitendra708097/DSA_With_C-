// Implementation of stack using linked list.

#include<iostream>
using namespace std;

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

// operations on stack
class stack
{
    public:
    Node *head;
    Node *prev;
    int length;

    stack()
    {
        head = NULL;
        length = 0;
    }

    // 1. push in stack
    void push(int value)
    {
          if(head == NULL)
          {
            prev = NULL;
            cout<<"Value pushed into stack: "<<value<<endl;
            head = new Node(value);
            length++;
          }
          else
          {
              prev = head;
              cout << "Value pushed into stack: " << value << endl;
              Node *temp = new Node(value);
              head->next = temp;
              head = temp;
              length++;
          }
    }

    // 2. top element of stack
    void top()
    {
        if(head == NULL)
        {
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            cout<<"top element from stack is: "<<head->data<<endl;
        }
    }

    // 3. pop element from stack
    void pop()
    {
        if(head == NULL)
        {
            cout<<"We can't pop from stack: stack underflow"<<endl;
        }
        else
        {
            cout<<"poped out element from stack: "<<head->data<<endl;
            Node *temp1 = head;
            delete temp1;
            head = prev;
            length--;
        }
    }
    // 4. size of stack
    void size()
    {
        cout<<"Size of stack is: "<<length<<endl;
    }

    // 5. check stack is empty or not
    void isEmpty()
    {
        if(head == NULL)
        {
            cout<<"Yes stack is empty: "<<endl;
        }
    }
};

    int main()
{

    stack st;
    st.isEmpty();
    st.top();
    st.push(1);
    st.top();
    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();
    st.top();
    st.push(5);
    st.size();

} 