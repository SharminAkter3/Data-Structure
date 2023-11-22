#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        myList.push_back(val);
    }

    myList.sort();
    myList.unique();

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

class Node
{
public:
    string address;
    Node *prev;
    Node *next;

    Node(string address)
    {
        this->address = address;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void append(string address)
    {
        Node *newNode = new Node(address);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node *find(string address)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->address == address)
            {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }
};

int main()
{
    DoublyLinkedList linkedList;
    string address;
    string command;

    // Read the doubly linked list
    while (true)
    {
        cin >> address;
        if (address == "end")
            break;
        linkedList.append(address);
    }

    int Q;
    cin >> Q;

    // Process the queries
    while (Q--)
    {
        cin >> command;

        if (command == "visit")
        {
            cin >> address;
            Node *node = linkedList.find(address);
            if (node != nullptr)
            {
                cout << node->address << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (linkedList.find(address) != nullptr && linkedList.find(address)->next != nullptr)
            {
                Node *nextNode = linkedList.find(address)->next;
                cout << nextNode->address << endl;
                address = nextNode->address;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (linkedList.find(address) != nullptr && linkedList.find(address)->prev != nullptr)
            {
                Node *prevNode = linkedList.find(address)->prev;
                cout << prevNode->address << endl;
                address = prevNode->address;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
