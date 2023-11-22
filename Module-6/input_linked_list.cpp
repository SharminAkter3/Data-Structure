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
    cout << endl;
    cout << "Your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

// bool size(Node *head_1, Node *head_2)
// {
//     Node *temp_1 = head_1;
//     Node *temp_2 = head_2;
//     int count_1 = 0;
//     int count_2 = 0;
//     while (temp_1 != NULL)
//     {
//         count_1++;
//         temp_1 = temp_1->next;
//     }
//     while (temp_2 != NULL)
//     {
//         count_2++;
//         temp_2 = temp_2->next;
//     }
//     if (count_1 != count_2)
//         return false;
// }

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

    print_linked_list(head);
    return 0;
}