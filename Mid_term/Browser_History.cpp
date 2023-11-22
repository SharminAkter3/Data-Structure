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

void find(Node *&current, string address)
{
    Node *temp = current;
    while (temp != NULL)
    {
        if (temp->data == address)
        {
            current = temp;
            return;
        }
        temp = temp->next;
    }
}

void visit_address(Node *&current, string address)
{
    Node *temp = current;
    while (temp != NULL)
    {
        if (temp->data == address)
        {
            current = temp;
            cout << temp->data << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}

void next_address(Node *&current)
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

void previous_address(Node *&current)
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
            visit_address(current, address);
        }
        else
        {
            if (command == "next")
            {
                next_address(current);
            }
            else if (command == "prev")
            {
                previous_address(current);
            }
        }
    }

    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// struct Node
// {
//     string site;
//     Node *prev;
//     Node *next;
// };

// class DoublyLinkedList
// {
// private:
//     Node *head;
//     Node *tail;
//     Node *current;

// public:
//     DoublyLinkedList()
//     {
//         head = nullptr;
//         tail = nullptr;
//         current = nullptr;
//     }

//     void insertAtTail(string site)
//     {
//         Node *newNode = new Node;
//         newNode->site = site;
//         newNode->prev = tail;
//         newNode->next = nullptr;

//         if (tail != nullptr)
//         {
//             tail->next = newNode;
//         }

//         tail = newNode;

//         if (head == nullptr)
//         {
//             head = newNode;
//         }
//     }

//     void visitSite(string site)
//     {
//         Node *temp = head;

//         while (temp != nullptr)
//         {
//             if (temp->site == site)
//             {
//                 cout << temp->site << endl;
//                 current = temp;
//                 return;
//             }

//             temp = temp->next;
//         }

//         cout << "Not Available" << endl;
//     }

//     void navigate(string command)
//     {
//         if (command == "next")
//         {
//             if (current != nullptr && current->next != nullptr)
//             {
//                 current = current->next;
//                 cout << current->site << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (command == "prev")
//         {
//             if (current != nullptr && current->prev != nullptr)
//             {
//                 current = current->prev;
//                 cout << current->site << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//     }
// };

// int main()
// {
//     DoublyLinkedList dll;

//     string site;
//     cin >> site;

//     while (site != "end")
//     {
//         dll.insertAtTail(site);
//         cin >> site;
//     }

//     int queries;
//     cin >> queries;

//     string command, siteName;
//     for (int i = 0; i < queries; i++)
//     {
//         cin >> command;

//         if (command == "visit")
//         {
//             cin >> siteName;
//             dll.visitSite(siteName);
//         }
//         else
//         {
//             dll.navigate(command);
//         }
//     }

//     return 0;
// }