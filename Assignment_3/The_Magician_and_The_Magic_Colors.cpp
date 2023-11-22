#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == st.top())
                {
                    st.pop();
                }
                else if (s[i] == 'R' && st.top() == 'B' || s[i] == 'B' && st.top() == 'R')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else if (s[i] == 'R' && st.top() == 'G' || s[i] == 'G' && st.top() == 'R')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('Y');
                    }
                }
                else if (s[i] == 'B' && st.top() == 'G' || s[i] == 'G' && st.top() == 'B')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('C');
                    }
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        stack<char> stk_2;
        while (!st.empty())
        {
            stk_2.push(st.top());
            st.pop();
        }
        while (!stk_2.empty())
        {
            cout << stk_2.top();
            stk_2.pop();
        }
        cout << endl;
    }
    return 0;
}