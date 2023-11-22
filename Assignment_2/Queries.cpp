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

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_linked_list(Node *head, Node *tail)
{
    cout << head->val << " " << tail->val << endl;
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, v);
            if (tail == NULL)
            {
                tail = head;
            }
        }
        else if (x == 1)
        {
            if (head == NULL)
            {
                insert_at_head(head, v);
                tail = head;
            }
            else
            {
                insert_tail(head, tail, v);
            }
        }

        print_linked_list(head, tail);
    }
    return 0;
}
