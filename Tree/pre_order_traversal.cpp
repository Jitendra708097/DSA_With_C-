// Preorder Traversal using recrusion
// pahle left me create krte jb tk null na jaye uske baad right
#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public : 
    int data;
    Node *right,*left;

    Node(int value)
    {
        data = value;
        right = left = NULL;
    }
};
// preorder traversal order
// To print the tree 
// isme hm sbse pahle left vala print hota jb tk left null na ho jaye uske baad right
void preorder(Node *root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
};
int main()
{
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<"Enter the value of left : ";
        cin>>first; //left node
        if(first!=-1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the value of right : ";
        cin>>second;
        if(second!=-1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    preorder(root);
}