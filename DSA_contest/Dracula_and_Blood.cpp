#include <bits/stdc++.h>
using namespace std;

int drinkZaza(string s)
{
    int count = 0;
    int n = s.length();

    int i = 0;
    while (i < n)
    {
        if (s[i] == '1')
        {
            count++;
            while (i < n && s[i] == '1')
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int result = drinkZaza(s);
        cout << result << endl;
    }

    return 0;
}
