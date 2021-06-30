#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace::std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
struct node* insertNode(struct node* node, int val)
{
    if (node==NULL)
        return createNode(val);
    if (val<node->data)
        node->left = insertNode(node->left, val);
    else if (val>node->data)
        node->right = insertNode(node->right, val);
    return node;
}
int getMin(struct node *root)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = root;
    while(temp->left!=NULL)
        temp = temp->left;
    return temp-> data;
}
int getMax(struct node *root)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = root;
    while(temp->right!=NULL)
        temp = temp->right;
    return temp->data;
}
int isBST(struct node *root)
{
    if (root==NULL)
        return 1;
    int max_left = getMax(root->left);
    int min_right = getMin(root->right);
    if(max_left>root->data || min_right<root->data)
        return 0;
    if(isBST(root->left)&&isBST(root->right))
        return 1;
    return 0;
}
int main()
{
        struct node *root=NULL;
        int n,val;
        root = insertNode(root,4);
        cout<<"Enter number of elements: ";
        cin>>n;
        cout<<"Enter the values: ";
        for(int i=0;i<n;i++)
        {
            cin>>val;
            insertNode(root,val);
        }
        if(isBST)
        {
            cout<<"Valid Binary tree \n";
            cout<<"In-Order traversal of the Binary Search Tree is: ";
            inorder(root);
        }
        else
            cout<<"Invalid and unable to traverse tree.";
        return 0;
}

