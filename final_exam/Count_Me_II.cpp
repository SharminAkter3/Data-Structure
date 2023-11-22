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

        map<int, int> mp;
        int maxNumber = INT_MIN;
        int maxCount = 0;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;

            if (mp[num] > maxCount || (mp[num] == maxCount && num > maxNumber))
            {
                maxCount = mp[num];
                maxNumber = num;
            }
        }
        cout << maxNumber << " " << maxCount << endl;
    }

    return 0;
}
