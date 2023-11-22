#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> sdt;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sdt.push(x);
    }
    while (!sdt.empty())
    {
        cout << sdt.top() << endl;
        sdt.pop();
    }

    return 0;
}