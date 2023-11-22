#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {10, 20, 30, 40, 50};
    // v.insert(v.begin() + 2, 10); // 2 no index e 10 ta insert korbo
    v.insert(v.begin() + 2, v2.begin(), v2.end()); // v verctor er 2 index er pory v2 vector er man golo insert korbo ...tai soro and shes pointer boly dity hoby

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}