#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result;
    int n = s.length();
    int i = 0;

    while (i < n)
    {
        if (isdigit(s[i]))
        {
            int num = s[i] - '0';
            i++;
            string group;
            while (islower(s[i]))
            {
                group += s[i];
                i++;
            }
            while (num--)
            {
                result += group;
            }
        }
        else
        {
            result += s[i];
            i++;
        }
    }

    cout << result << endl;

    return 0;
}
