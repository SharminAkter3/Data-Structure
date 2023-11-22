#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> st;
        vector<int> vt;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        for (int val : st)
        {
            vt.push_back(val);
        }
        reverse(vt.begin(), vt.end());

        for (int val : vt)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}