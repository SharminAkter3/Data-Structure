#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    if (!q.empty())
    {
        cout << q.front() << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     queue<int> q;
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         st.push(x);
//     }

//     for (int i = 0; i < m; i++)
//     {
//         int x;
//         cin >> x;
//         q.push(x);
//     }

//     while (!st.empty())
//     {

//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }

//     while (!st.empty() && !q.empty())
//     {
//         if (st.top() == q.front())
//         {
//             cout << "YES";
//         }
//         else
//         {
//             cout << "NO";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = nullptr;
//     }
// };

// class MyStack
// {
// private:
//     Node *topNode;
//     int size;

// public:
//     MyStack()
//     {
//         topNode = nullptr;
//         size = 0;
//     }

//     void push(int val)
//     {
//         Node *newNode = new Node(val);
//         newNode->next = topNode;
//         topNode = newNode;
//         size++;
//     }

//     void pop()
//     {
//         if (isEmpty())
//             return;

//         Node *temp = topNode;
//         topNode = topNode->next;
//         delete temp;
//         size--;
//     }

//     int top()
//     {
//         if (isEmpty())
//             return -1;

//         return topNode->val;
//     }

//     int getSize()
//     {
//         return size;
//     }

//     bool isEmpty()
//     {
//         return size == 0;
//     }
// };

// class MyQueue
// {
// private:
//     Node *frontNode;
//     Node *rearNode;
//     int size;

// public:
//     MyQueue()
//     {
//         frontNode = nullptr;
//         rearNode = nullptr;
//         size = 0;
//     }

//     void enqueue(int val)
//     {
//         Node *newNode = new Node(val);
//         if (isEmpty())
//         {
//             frontNode = newNode;
//             rearNode = newNode;
//         }
//         else
//         {
//             rearNode->next = newNode;
//             rearNode = newNode;
//         }
//         size++;
//     }

//     void dequeue()
//     {
//         if (isEmpty())
//             return;

//         Node *temp = frontNode;
//         frontNode = frontNode->next;
//         delete temp;
//         size--;

//         if (isEmpty())
//             rearNode = nullptr;
//     }

//     int front()
//     {
//         if (isEmpty())
//             return -1;

//         return frontNode->val;
//     }

//     int getSize()
//     {
//         return size;
//     }

//     bool isEmpty()
//     {
//         return size == 0;
//     }
// };

// bool checkListsEqual(int n, int m, MyStack &stack, MyQueue &queue)
// {
//     if (n != m)
//         return false;

//     while (!stack.isEmpty() && !queue.isEmpty())
//     {
//         if (stack.top() != queue.front())
//             return false;

//         stack.pop();
//         queue.dequeue();
//     }

//     return stack.isEmpty() && queue.isEmpty();
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     MyStack stack;
//     MyQueue queue;

//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin >> val;
//         stack.push(val);
//     }

//     for (int i = 0; i < m; i++)
//     {
//         int val;
//         cin >> val;
//         queue.enqueue(val);
//     }

//     if (checkListsEqual(n, m, stack, queue))
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }
