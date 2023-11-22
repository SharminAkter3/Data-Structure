#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v; // type-1

    // vector<int> v(5); // type-2 ...kono value dewa hoi ni tai 0 ashby

    // vector<int> v(5, 10); // type-3.... value 10 dewa hoicy tai poti ta ghor e 10 ashby

    // vector<int> v2(5, 100);
    // vector<int> v(v2); //type-4...akta vector theky onno ak ta vector copy kora

    // int a[6] = {1, 2, 3, 4, 5, 6};
    // vector<int> v(a, a + 6); // type-5...ak ta array theky copy kora ...a--> soro r pointer..a+6--> shes pointer

    vector<int> v = {2, 4, 6}; // type-6...vector er kono size bolty hoi na...dynamic vhaby create kory niby...value er jnn joto tok poiojon hoi

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    return 0;
}