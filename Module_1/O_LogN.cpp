#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // while (n > 0) // 0(logN)
    // {
    //     int digit = n % 10;
    //     cout << digit << endl;
    //     n /= 10;
    // }
    for (int i = 1; i <= n; i = i * 2) // O(logN) ...gun akary kaj cholly logN hoby
    {
        cout << i << endl;
    }

    return 0;
}