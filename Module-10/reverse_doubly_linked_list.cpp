#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    reverse(head, tail);
    print_normal(head);
    // print_reverse(tail);

    return 0;
}