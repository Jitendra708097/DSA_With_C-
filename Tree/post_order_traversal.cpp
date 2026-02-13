// Implemented post order traversal on Binary tree 
#include<iostream>
#include<queue>
using namespace std;

// implement binary tree 
class Node
{
    public:
    int data;
    Node *left,*right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Post order traversal on binary tree 
void post_order_traversal(Node *root)
{
    if(root == NULL)
    return ;

    // left 
    post_order_traversal(root->left);
    // right 
    post_order_traversal(root->right);
    // print node data 
    cout<<root->data<<" ";
}

int main()
{
   int root_data;
   cout<<"Enter the root element: ";
   cin>>root_data;

   queue<Node *>q;
   Node *root = new Node(root_data);
   q.push(root);

   int left_element,right_element;
   while (!q.empty())
   {
     Node *temp = q.front();
     q.pop();

    //  For left Node 
     cout<<"Enter the left element: ";
     cin>>left_element;
     if(left_element != -1)
     {
        temp->left = new Node(left_element);
        q.push(temp->left);
     }

    //  For right Node 
    cout<<"Enter the right element: ";
    cin>>right_element;
    if(right_element != -1)
    {
        temp->right = new Node(right_element);
        q.push(temp->right);
    }
   }

//    post traversal 
cout<<"Post Order Traversal: ";
post_order_traversal(root);
   
   
}