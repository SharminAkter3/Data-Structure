class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> newQ;
        int last;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                // last element
                last = k;
                break;
            }
            newQ.push(k);
        }
        q = newQ;
        return last;
    }

    int top()
    {
        queue<int> newQ;
        int last;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                // last element
                last = k;
            }
            newQ.push(k);
        }
        q = newQ;
        return last;
    }

    bool empty()
    {
        return q.empty();
    }
};

class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
                break;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }

    int peek()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }

    bool empty()
    {
        return st.empty();
    }
};

// class MyQueue
// {
// public:
//     queue<int> q;
//     void push(int x)
//     {
//         q.push(x);
//     }

//     int pop()
//     {
//         queue<int> newQ;
//         int last;
//         while (!q.empty())
//         {
//             int k = q.front();
//             q.pop();
//             if (q.empty())
//             {
//                 // last element
//                 last = k;
//                 break;
//             }
//             newQ.push(k);
//         }
//         q = newQ;
//         return last;
//     }

//     int top()
//     {
//         queue<int> newQ;
//         int last;
//         while (!q.empty())
//         {
//             int k = q.front();
//             q.pop();
//             if (q.empty())
//             {
//                 // last element
//                 last = k;
//             }
//             newQ.push(k);
//         }
//         q = newQ;
//         return last;
//     }

//     bool empty()
//     {
//         return q.empty();
//     }
// };

// class MyStack
// {
// public:
//     stack<int> st;
//     void push(int x)
//     {
//         st.push(x);
//     }

//     int pop()
//     {
//         stack<int> newSt;
//         int last;
//         while (!st.empty())
//         {
//             int k = st.top();
//             st.pop();
//             if (st.empty())
//             {
//                 // last element
//                 last = k;
//                 break;
//             }
//             newSt.push(k);
//         }
//         while (!newSt.empty())
//         {
//             st.push(newSt.top());
//             newSt.pop();
//         }
//         return last;
//     }

//     int front()
//     {
//         stack<int> newSt;
//         int last;
//         while (!st.empty())
//         {
//             int k = st.top();
//             st.pop();
//             if (st.empty())
//             {
//                 // last element
//                 last = k;
//             }
//             newSt.push(k);
//         }
//         while (!newSt.empty())
//         {
//             st.push(newSt.top());
//             newSt.pop();
//         }
//         return last;
//     }

//     bool empty()
//     {
//         return st.empty();
//     }
// };
