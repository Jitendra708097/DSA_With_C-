// delete elements in Binary Search Tree(BST)
#include <iostream>
using namespace std;

// Node
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// insertion of element in BST
Node *insert(Node *root, int element)
{
    //   Base Case
    if (root == NULL)
    {
        root = new Node(element);
        return root;
    }

    // left
    if (element <= root->data)
    {
        root->left = insert(root->left, element);
    }
    else
    {
        root->right = insert(root->right, element);
    }

    return root;
}

// in-order traversal
void inorder(Node *root)
{
    // Base case
    if (root == NULL)
        return;

    // left
    inorder(root->left);
    // Node
    cout << root->data << " ";
    // right
    inorder(root->right);
}

// pre-order traversal
void preorder(Node *root)
{
    // Base case
    if (root == NULL)
        return;

    // Node
    cout << root->data << " ";
    // left
    preorder(root->left);
    // right
    preorder(root->right);
}

// post order traversal of tree
void postorder(Node *root)
{
    // Base case
    if (root == NULL)
        return;

    // left
    postorder(root->left);
    // right
    postorder(root->right);
    // Node
    cout << root->data << " ";
}

Node *delete_element(Node *root,int element)
{
    // Base Case 
    if(root == NULL)
    return root;

    if(element<root->data)
    root->left = delete_element(root->left,element);
    else if(root->data<element)
    root->right = delete_element(root->right,element);

    else
    {
        // 1. root ka left element nhi hai
        if (root->left == NULL)
        {
            if (root->data == element)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }
        }

        // 2. root ka right element nhi hai
        if (root->right == NULL)
        {
            if (root->data == element)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }
        }

        // 3 delete leaf element
        if (root->left == NULL && root->right == NULL)
        {
            if (root->data == element)
            {
                delete root;
                return NULL;
            }
        }

        // delete root Node from binary tree
        if(root->left != NULL && root->right != NULL)
        {
            if(root->data == element)
            {
                Node *parent = root;
                Node *child = root->left;

                // find right most element of child node 
                while(child->right)
                {
                    parent = child;
                    child = child->right;
                }

                if(root == parent)
                {
                    child->right = root->right;
                    delete root;
                    return child;
                }
                else
                {
                    parent->right = child->left;
                    child->left = root->left;
                    child->right = root->right;
                    delete root;
                    return child;
                }
            }
        }
    }

    return root;
}

int main()
{
    int arr[9] = {5, 6, 1, 2, 8, 7, 11, 4, 3};
    Node *root = NULL;
    for (int i = 0; i < 9; i++)
    {
        root = insert(root, arr[i]);
    }

    int element;
    cout<<"Enter the element: ";
    cin>>element;

    root = delete_element(root,element);

    cout << "In order traversal of tree: ";
    inorder(root);

    cout << endl
         << "Pre order traversal of tree: ";
    preorder(root);

    cout << endl
         << "Post order traversal of tree: ";
    postorder(root);
}