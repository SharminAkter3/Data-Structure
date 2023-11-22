#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);

        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && c == 'A' && st.top() == 'B')
            {
                st.pop();
            }
            else if (!st.empty() && c == 'B' && st.top() == 'A')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
