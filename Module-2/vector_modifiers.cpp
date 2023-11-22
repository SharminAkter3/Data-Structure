#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {10, 20, 30};

    vector<int> x = {10, 20, 30, 40};
    x.pop_back();
    x.pop_back();

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    // vector<int> x = {40, 50, 60, 70};
    // // v = x; // complexity -> O(1)
    // v = x; // complexity -> O(N)...size bara r fol er complexity same hoby na .

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    return 0;
}