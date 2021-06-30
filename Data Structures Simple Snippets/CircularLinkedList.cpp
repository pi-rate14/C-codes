#include <iostream>
using namespace ::std;

class Node
{
public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class CircularLinkedList
{
public:
    Node *head;

    CircularLinkedList()
    {
        head = NULL;
    }

    Node *nodeExists(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        if (ptr == NULL)
        {
            return temp;
        }
        else
        {
            do
            {
                if (ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            } while (ptr != head); //last node's next has head hence we use do while
            return temp;
        }
    }

    void appendNode(Node *new_node)
    {
        if (nodeExists(new_node->key) != NULL)
        {
            cout << "Node already exists with key value " << new_node->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = new_node;
                new_node->next = head;
                cout << "node appended at first head position" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = new_node;
                new_node->next = head;
                cout << "node appended" << endl;
            }
        }
    }

    void prependNode(Node *new_node)
    {
        if (nodeExists(new_node->key) != NULL)
        {
            cout << "Node already exists with key value " << new_node->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = new_node;
                new_node->next = head;
                cout << "node appended at first head position" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = new_node;
                new_node->next = head;
                head = new_node;
                cout << "node prepended" << endl;
            }
        }
    }

    void insertNodeAfter(int k, Node *new_node)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exists with key value " << k << endl;
        }
        else
        {
            if (nodeExists(new_node->key) != NULL)
            {
                cout << "node already exists with key value " << new_node->key;
            }
            else
            {
                if (ptr->next == head)
                {
                    new_node->next = head;
                    ptr->next = new_node;
                    cout << "node inserted at end" << endl;
                }
                else
                {
                    new_node->next = ptr->next;
                    ptr->next = new_node;
                    cout << "node inserted" << endl;
                }
            }
        }
    }

    void deleteNodeByKey(int k)
    {
        Node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "no node exists with key value " << k;
        }
        else
        {
            if (ptr == head)
            {
                if (head->next == NULL)
                {
                    head = NULL;
                    cout << "head unlinked. list empty";
                }
                else
                {
                    Node *ptr1 = head;
                    while (ptr1->next != head)
                    {
                        ptr1 = ptr1->next;
                    }
                    ptr1->next = head->next;
                    head = head->next;
                    cout << "node unlinked.";
                }
            }
            else
            {
                Node *temp = NULL;
                Node *prevptr = head;
                Node *currentptr = head->next;
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                prevptr->next = temp->next;
                cout << "node unlinked";
            }
        }
    }

    void updateNodeByKey(int k, int d)
    {
        Node *ptr = nodeExists(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "node updated";
        }
        else
        {
            cout << "Node doesn't exist with key value " << k;
        }
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "No nodes in circular linked list";
        }
        else
        {
            cout << endl
                 << "head address: " << head << endl;
            cout << "Values: " << endl;
            Node *temp = head;
            do
            {
                cout << "(" << temp->key << "," << temp->data << "," << temp->next << ") --> ";
                temp = temp->next;
            } while (temp != head);
        }
    }
};

int main()
{

    CircularLinkedList obj;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. Clear Screen" << endl
             << endl;

        cin >> option;
        Node *n1 = new Node();
        //Node n1;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.appendNode(n1);
            //cout<<n1.key<<" = "<<n1.data<<endl;
            break;

        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.prependNode(n1);
            break;

        case 3:
            cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;

            obj.insertNodeAfter(k1, n1);
            break;

        case 4:

            cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
            cin >> k1;
            obj.deleteNodeByKey(k1);

            break;
        case 5:
            cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            obj.updateNodeByKey(key1, data1);

            break;
        case 6:
            obj.printList();

            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);

    return 0;
}