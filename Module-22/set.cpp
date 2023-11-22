#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.count(200))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " "; // O(logN)
    // }

    return 0;
}