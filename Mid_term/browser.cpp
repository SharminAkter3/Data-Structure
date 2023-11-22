#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
    Node *prev;

    Node(string data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insert_tail(Node *&head, Node *&tail, string address)
{
    Node *newNode = new Node(address);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

Node *find(Node *current, string address)
{
    Node *temp = current;
    while (temp != NULL)
    {
        if (temp->data == address)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void visitAddress(Node *&current, string address)
{
    Node *node = find(current, address);
    if (node != NULL)
    {
        current = node;
        cout << node->data << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void next(Node *&current)
{
    if (current != NULL && current->next != NULL)
    {
        current = current->next;
        cout << current->data << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void previous(Node *&current)
{
    if (current != NULL && current->prev != NULL)
    {
        current = current->prev;
        cout << current->data << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string address;
    while (true)
    {
        cin >> address;
        if (address == "end")
            break;
        insert_tail(head, tail, address);
    }

    int q;
    cin >> q;

    Node *current = head;

    string command;

    for (int i = 0; i < q; i++)
    {
        cin >> command;
        cin.ignore();

        if (command == "visit")
        {
            cin >> address;
            visitAddress(current, address);
        }
        else if (command == "next")
        {
            next(current);
        }
        else if (command == "prev")
        {
            previous(current);
        }
    }

    return 0;
}
