// Insert elements in Binary Search Tree(BST)
// Rule:
// 1. element greater that root element then it will insert in right side
// of BST.

// 2.Element less then or equals to root then it will insert left side of root in BST.

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
void inorder(Node *root,int target)
{
    // Base case
    if (root == NULL){
        return ;
    }

    // left
    inorder(root->left,target);
    // Node
    if(root->data == target){
     cout<<"Element is present: ";
     return ;
    }
    // right
    inorder(root->right,target);
}

int main()
{
    int arr[8] = {5, 6, 1, 2, 8, 11, 4, 3};
    Node *root = NULL;
    for (int i = 0; i < 8; i++)
    {
        root = insert(root, arr[i]);
    }

    int target = 80;

    cout << "Check wheather element is present or not: ";
    inorder(root,target);
}