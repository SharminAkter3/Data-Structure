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

void input_linked_list(Node *&head, int v)
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

int size(Node *head)
{
    Node *temp = head;
    int siz = 0;
    while (temp != NULL)
    {
        siz++;
        temp = temp->next;
    }
    return siz;
}

bool same_to_same(Node *head_1, Node *head_2)
{
    Node *temp_1 = head_1;
    Node *temp_2 = head_2;
    int s1 = size(head_1);
    int s2 = size(head_2);
    if (s1 != s2)
    {
        return false;
    }
    else
    {

        while (temp_1 != NULL && temp_2 != NULL)
        {
            if (temp_1->val != temp_2->val)
            {
                return false;
            }
            else
            {
                return true;
            }
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
        }
    }
}
int main()
{
    int val;
    Node *head_1 = NULL;
    Node *head_2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input_linked_list(head_1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input_linked_list(head_2, val);
    }

    if (same_to_same(head_1, head_2) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}