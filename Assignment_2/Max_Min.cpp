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

void insert_linked_list(Node *&head, int val)
{
    Node *newNode = new Node(val);
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

    temp->next = newNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_linked_list(head, val);
    }

    Node *temp1 = head;
    int max = temp1->val;
    for (Node *i = temp1; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
    }

    Node *temp2 = head;
    int min = temp2->val;
    for (Node *i = temp2; i != NULL; i = i->next)
    {
        if (i->val < min)
        {
            min = i->val;
        }
    }

    cout << max << " ";
    cout << min;

    return 0;
}