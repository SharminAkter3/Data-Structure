#include <bits/stdc++.h>
using namespace std;

int calculateTree(int year)
{
    if (year == 1)
    {
        return 1;
    }
    return 2 * calculateTree(year - 1);
}

int main()
{
    int y;
    cin >> y;

    int sum = 0;
    for (int i = 1; i <= y; i++)
    {
        sum += calculateTree(i);
    }

    cout << sum << endl;

    return 0;
}
