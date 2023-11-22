#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator it;
    // cout << v[v.size() - 1]; //last element ta access kora
    // cout << v.back(); // last element ta access kora

    // cout << v[0]; // first element ta access kora
    // cout << v.front(); // first element ta access kora

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}