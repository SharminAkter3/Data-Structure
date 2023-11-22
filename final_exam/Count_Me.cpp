#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);

        map<string, int> mp;

        int max = INT_MIN;
        string w;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                max = mp[word];
                w = word;
            }
        }
        cout << w << " " << max;
        cout << endl;
    }

    return 0;
}