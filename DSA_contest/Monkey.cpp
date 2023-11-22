#include <bits/stdc++.h>
using namespace std;

void sortString(string &st)
{
    sort(st.begin(), st.end());
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        string word, result;
        stringstream ss(s);
        while (ss >> word)
        {
            sortString(word);
            result += word;
        }
        sortString(result);
        cout << result << endl;
    }
    return 0;
}