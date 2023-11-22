#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp akn last node a
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    cout << "Your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// void print_reverse(Node *head)
// {
//     Node *current = head;
//     Node *previous = NULL;
//     Node *next = NULL;

//     while (current != NULL)
//     {
//         next = current->next;
//         current->next = previous;
//         previous = current;
//         current = next;
//     }

//     head = previous;

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 - insert at tail" << endl;
        cout << "Option 2 - print linked list" << endl;
        cout << "Option 3 - terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please Enter a value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}