#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;

    // mp.insert({"Sharmin", 31}); // pair = {key, value}
    // mp.insert({"Rupnika", 44});
    // mp.insert({"Rafsan", 40});

    // or
    mp["Sharmin"] = 31;
    mp["Rupnika"] = 44; // O(logN)
    mp["Rafsan"] = 40;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    // cout << mp["rafsan"] << endl;

    // if (mp.count("Rafsan"))
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    return 0;
}