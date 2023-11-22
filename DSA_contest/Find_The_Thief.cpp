#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }

        int result = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                result = it->first;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}