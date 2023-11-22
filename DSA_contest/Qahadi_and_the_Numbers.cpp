#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        set<int> st;
        int moves = 0;

        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;

            if (st.count(num))
            {
                moves++;
            }
            else
            {
                st.insert(num);
            }
        }
        cout << moves << endl;
    }

    return 0;
}
