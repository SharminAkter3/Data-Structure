#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int k = 0; k < n - 1;)
        {
            if (a[k] <= a[k + 1])
            {
                flag++;
                k++;
            }
            else
            {
                break;
            }
        }
        if (flag == n - 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
