// Construct tree using inorder traversal and postorder traversal of tree 
                    
//             2
//         3      6
//     4     5  8    9

// pre-order: 2 3 4 5 6 8 9
// inorder: 4 3 5 2 8 6 9

//            2
//     3           6
//              8     9
// 4     5

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int find_pos(int data,int arr[])
{
    
}

Node *construct_tree(int start,int inorder[],int preorder[],int end)
{
    // Base Case 
    if(start == end)
    return NULL;

    Node *temp = new Node(inorder[0]);
    int pos = find_pos(temp->data,preorder);
}

int main()
{
    int inorder[7] = {4,3,5,2,8,6,9};
    int preorder[7] = {2,3,4,5,6,8,9};

    Node *root = construct_tree(0,inorder,preorder,7);
}