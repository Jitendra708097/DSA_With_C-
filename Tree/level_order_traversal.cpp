// Level order traversal of binary tree 
#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

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

        // print the element 
        cout<<temp->data<<" ";

        // left push 
        q.push(temp->left);
        // right push 
        q.push(temp->right);
    }
    

}

int main()
{
    int root_data;
    cout<<"Enter the root data: ";
    cin>>root_data;

    queue<Node *>q;
    Node *root = new Node(root_data);
    q.push(root);

    int left_element,right_element;
    while(!q.empty())
    {

        Node *temp = q.front();
        q.pop();

        //  For left Node
        cout << "Enter the left element: ";
        cin >> left_element;
        if (left_element != -1)
        {
            temp->left = new Node(left_element);
            q.push(temp->left);
        }

        //  For right Node
        cout << "Enter the right element: ";
        cin >> right_element;
        if (right_element != -1)
        {
            temp->right = new Node(right_element);
            q.push(temp->right);
        }
    }

    cout<<"Level order traversal: ";
    level_order_traversal(root);
}