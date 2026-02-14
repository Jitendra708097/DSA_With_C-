// level order implementation of tree using queue 

#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public :
    int data;
    Node *left,*right;

    // contructor to initiliase the value
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
int main()
{
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int first,second;
    queue<Node* >q;
    Node *root = new Node(x);
    q.push(root);
    // build binary tree
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        // left node
        cout<<"Enter the value of left node : ";
        cin>>first;
        if(first!=-1)
        {
            temp ->left = new Node(first);
            q.push(temp->left);
        }
        // right node
        cout<<"Enter the value of right node : ";
        cin>>second;
        if(second!=-1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }

    }
}