#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;

    // cout << v.capacity() << endl;
    v.push_back(10);
    // cout << v.capacity() << endl;
    v.push_back(20);
    // cout << v.capacity() << endl;
    v.push_back(30);
    // cout << v.capacity() << endl; // capacity 2 gun kory barby
    v.push_back(40);
    // cout << v.capacity() << endl;

    // v.clear(); // value golo muchy diby...size clear korby  ...kintu internally memory theky value golo delete hoi na
    v.resize(2);     // protom 2 ta value niby baki golo delete kory diby
    v.resize(7, 50); // protom 2 ta value agy r j golo thakby shy golo bosaby ..and baki golo 50 diye diby
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}