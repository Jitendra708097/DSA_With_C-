#include<iostream>
using namespace std;

class Node
{
    public:
    int data,height;
    Node *left,*right;

    Node(int value)
    {
        data = value;
        height = 1;
        left = right = NULL;
    }
};

// get height of tree
int getHeight(Node *root)
{
    if(root == NULL)
    return 0;

    return max(root->left->height,root->right->height);
}

Node *insert(Node *root, int key)
{
    //  Base Case 
    if(root == NULL)
    {
        root = new Node(key);
        return root;
    }

    // left 
    if(root->data>key)
    {
        root->left = insert(root->left,key);
    }

    // right 
    else if(root->data<key)
    {
        root->right = insert(root->right,key);
    }

    return root;

    int height = getHeight(root->left);

};

// inorder traversal of binary tree 
void inorder(Node *root)
{
    // Base Case 
    if(root == NULL)
    return ;

    inorder(root->left);  // left
    cout<<root->data<<" ";  // Node
    inorder(root->right);  // right
}

// post order traversal
void postorder(Node *root)
{
    if(root == NULL)
    return ;

    postorder(root->left);  // left
    postorder(root->right);  // right
    cout<<root->data<<" ";  // Node
}

int main()
{
    Node *root = NULL;
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    
    for(int i=0;i<10;i++)
    {
        root = insert(root,arr[i]);
    }

    cout<<"In order traversal: "<<endl;
    inorder(root);

    cout<<endl<<" post order traversal: ";
    postorder(root);
}