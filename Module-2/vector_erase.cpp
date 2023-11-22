#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin() + 3); // 3 no index er value ta delete korby
    // v.erase(v.begin() + 1, v.begin() + 4); // 1 no index theky suru kory 4 no index er ag porjonto delete korby
    v.erase(v.begin() + 1, v.end() - 1);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}