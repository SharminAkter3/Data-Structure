#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList = {10, 20, 30};
    // list<int> newList;
    // // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    list<int> myList = {10, 20, 30, 40, 30, 30, 50, 60};
    list<int> newList = {100, 200, 300};
    vector<int> v = {800, 900, 700};
    // myList.push_back(100);
    // myList.push_front(100);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 2), 100);
    // myList.erase(next(myList.begin(), 2));
    // myList.insert(next(myList.begin(), 2), {100, 200, 300});
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(), 2), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 30, 100);

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 60);
    if (it == myList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }
    // cout << *it << endl;

    return 0;
}