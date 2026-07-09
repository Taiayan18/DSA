#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    // Constructor
    LinkedList()
    {
        head = NULL;
    }

    void insert_at_beginning(int value)
    {
        Node *newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }

    
    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void Search(int key)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Element Found" << endl;
                return;
            }

            temp = temp->next;
        }

        cout << "Element Not Found" << endl;
    }


    void Delete_node(int key)
    {
        Node *temp = head;
        Node *prev = NULL;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                if (prev == NULL)
                {
                    head = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }

                delete temp;
                cout << "Node Deleted" << endl;
                return;
            }

            prev = temp;
            temp = temp->next;
        }

        cout << "Element Not Found" << endl;
    }

  
    void reverse()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }
};

int main()
{
    LinkedList l;

    l.insert_at_beginning(30);
    l.insert_at_beginning(20);
    l.insert_at_beginning(10);

    cout << "Linked List : ";
    l.display();

    l.Search(20);

    l.Delete_node(20);

    cout << "After Delete : ";
    l.display();

    l.reverse();

    cout << "After Reverse : ";
    l.display();

    return 0;
}