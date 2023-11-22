#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 5, 2, 2, 7, 2, 3, 4, 5};
    // vector<int>::iterator it;

    auto it = find(v.begin(), v.end(), 100);
    if (it == v.end())
        cout << "not found";
    else
        cout << "found";
    // cout << *it;
    return 0;
}