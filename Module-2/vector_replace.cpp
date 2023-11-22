#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 2, 4, 2, 7, 2, 1};
    // replace(v.begin(), v.end(), 2, 100); // replace--> vector er kono function na...ta ak ta function..tai v. boshby na....j ta ky replace korbo shy vector er soro r shes boly dity hoby ...kon taky replace korbo shy ta bolty hoby r..replace kory ki bosaty chacchi shy ta bolty hoby
    replace(v.begin(), v.end() - 4, 2, 100);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}