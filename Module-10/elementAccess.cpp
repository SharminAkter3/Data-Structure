#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 30, 10, 25};
    // cout << myList.front();
    // cout << myList.back();
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}