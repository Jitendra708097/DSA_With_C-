// Implementation of binary tree using linked list.

#include<iostream>
#include<queue>
using namespace std;

// create Node 
class Node
{
    public:
    int data;
    Node *left,*right;

    // Constructor
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *Binary_tree()
{
    int x;
    cin>>x;

    Node *temp = new Node(x);
    if(x == -1)
    return NULL;

    cout<<"Enter the left Node of Binary Tree "<<x<<":";
    temp->left = Binary_tree(); // left

    cout<<"Enter the right Node of Binary Tree "<<x<<":";
    temp->right = Binary_tree();  // right;

    return temp;

}

// Inorder Traversal of Binary Tree 
// LNR 
void inorder_traversal(Node *root)
{
    if(root == NULL)
    return ;

    inorder_traversal(root->left); // left
    cout<<root->data<<" ";
    inorder_traversal(root->right); // right
}

// post order traversal of binary tree 
// LRN 
void post_order_traversal(Node *root)
{
    if(root == NULL)
    return ;

    post_order_traversal(root->left);  //left
    post_order_traversal(root->right);  // right
    cout<<root->data<<" ";
}

// Pre-Order Traversal of Binary Tree 
// NLR 
void pre_order_traversal(Node *root)
{
    if(root == NULL)
    return ;

    cout<<root->data<<" ";
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}

// Level order traversal of binary tree 
void level_order_traversal(Node *root)
{
    if(root == NULL)
    return ;


    queue<Node *>q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout<<temp->data<<" ";
        q.push(temp->left);
        q.push(temp->right);
    }
    
}

int main()
{
    cout<<"Enter the root node: ";
    Node *root = Binary_tree();

    cout<<"Inorder traversal of Binary Tree: ";
    inorder_traversal(root);

    cout<<endl<<"Post Order Traversal of Binary Tree: ";
    post_order_traversal(root);

    cout<<endl<<"Pre Order Traversal of Binary Tree: ";
    pre_order_traversal(root);

    cout<<endl<<"level order traversal: ";
    level_order_traversal(root);

}