#include <bits/stdc++.h>
using namespace std;

bool checkList(stack<int> &s, queue<int> &q)
{
    while (!s.empty() && !q.empty())
    {
        int stackValue = s.top();
        s.pop();
        int queueValue = q.front();
        q.pop();

        if (stackValue != queueValue)
        {
            return false;
        }
    }

    return s.empty() && q.empty();
}

int main()
{
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool result = checkList(s, q);

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