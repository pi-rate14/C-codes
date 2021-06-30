#include<bits/stdc++.h>
using namespace::std;
#define COUNT 10
class Node
{
    public:
        int data;
        Node* left, *right;
        Node(int data)
        {
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};
void print2DUtil(Node *root, int space)
{
    if(root==NULL)
        return;
    space += COUNT;
    print2DUtil(root->right,space);
    cout<<endl;
    for(int i=COUNT;i<space;i++)
    {
        cout<<" ";
    }
    cout<<root->data<<"\n";
    print2DUtil(root->left, space);
}
void print2D(Node *root)
{
    print2DUtil(root, 0);
}
int main()
{
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(9);
    print2D(root);
    return 0;
}
