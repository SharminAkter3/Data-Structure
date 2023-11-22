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
    temp->next = newNode;
}

void remove_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *temp = tmp;
        while (temp->next != NULL)
        {
            if (temp->next->val == tmp->val)
            {
                Node *duplicateNode = temp->next;
                temp->next = temp->next->next;
                delete duplicateNode;
            }
            else
            {
                temp = temp->next;
            }
        }
        tmp = tmp->next;
    }
}

void sort_linked_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *curr = head;
    Node *index = NULL;
    int temp;

    while (curr != NULL)
    {
        index = curr->next;

        while (index != NULL)
        {
            if (curr->val > index->val)
            {
                temp = curr->val;
                curr->val = index->val;
                index->val = temp;
            }
            index = index->next;
        }
        curr = curr->next;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    remove_duplicate(head);

    sort_linked_list(head);
    print_linked_list(head);
    cout << endl;
    return 0;
}
