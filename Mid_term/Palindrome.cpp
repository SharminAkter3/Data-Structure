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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    print_reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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

bool isPalindrome(Node *head)
{
    Node *newHead = NULL;
    Node *newtail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        insert_tail(newHead, newtail, temp->val);
        temp = temp->next;
    }
    print_reverse(newHead, newHead);
    // print_linked_list(newHead);
    temp = head;
    Node *temp2 = newHead;
    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
}

int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    bool result = isPalindrome(head);

    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
