#include <bits/stdc++.h>
#define SPACE 10
using namespace ::std;

class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;

    int height(TreeNode *r){
        if(r==NULL)
        return -1;
        else{
            int lheight = height(r->left);
            int rheight = height(r->right);
            lheight > rheight ? return (lheight+1) : return (rheight+1);
        }
    }

    TreeNode *iterativeSearch(int val)
    {
        if (root == NULL)
            return root;
        TreeNode *temp = root;
        while (temp != NULL)
        {
            if (val == temp->value)
            {
                return temp;
            }
            else if (val < temp->value)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        return NULL;
    }

    void printPreorder(TreeNode *r)
    {
        if (r == NULL)
            return;
        cout << r->value << " ";
        printPreorder(r->left);
        printPreorder(r->right);
    }

    void printInorder(TreeNode *r)
    {
        if (r == NULL)
            return;
        printInorder(r->left);
        cout << r->value << " ";
        printInorder(r->right);
    }

    void printPostorder(TreeNode *r)
    {
        if (r == NULL)
            return;
        printPostorder(r->left);
        printPostorder(r->right);
        cout << r->value << " ";
    }

    void print2D(TreeNode *r, int space)
    {
        if (r == NULL)
            return;
        space += SPACE;
        print2D(r->right, space);
        cout << endl;
        for (int i = SPACE; i < space; i++)
            cout << " ";
        cout << r->value << "\n";
        print2D(r->left, space);
    }

    BST()
    {
        root = NULL;
    }
    bool isEmpty()
    {
        if (root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void insertNode(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "value inserted as root node";
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (new_node->value == temp->value)
                {
                    cout << "value already exists.";
                    break;
                }
                else if ((new_node->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = new_node;
                    cout << "value inserted\n";
                    break;
                }
                else if (new_node->value < temp->value)
                {
                    temp = temp->left;
                }
                else if ((new_node->value > temp->value) && (temp->right == NULL))
                {
                    temp->right = new_node;
                    cout << "value inserted\n";
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
};

int main()
{

    BST obj;
    int option, val;
    do
    {
        cout << "what operation do you want to perform?";
        cout << "1. insert node" << endl;
        cout << "2. search node" << endl;
        cout << "3. delete node" << endl;
        cout << "4. print nodes" << endl;
        cout << "5. clear screen" << endl;
        cout << "0. exit screen" << endl;

        cin >> option;

        TreeNode *new_node = new TreeNode();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "insert" << endl;
            cout << "insert value to be inserted: ";
            cin >> val;
            new_node->value = val;
            obj.insertNode(new_node);
            break;
        case 2:
            cout << "search" << endl;
            cout << "insert value to be inserted: ";
            cin >> val;
            new_node = obj.iterativeSearch(val);
            break;
        case 3:
            cout << "delete" << endl;
            break;
        case 4:
            cout << "print and traverse" << endl;
            obj.print2D(obj.root, 5);
            obj.printPreorder(obj.root);
            break;
        case 5:
            cout << "clr scr" << endl;
            system("cls");
            break;
        default:
            cout << "enter proper option number" << endl;
        }
    } while (option != 0);
    return 0;
}