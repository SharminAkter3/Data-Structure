// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     queue<string> q;

//     while (n--)
//     {
//         int value;
//         cin >> value;

//         if (value == 0)
//         {
//             string name;
//             cin >> name;
//             q.push(name);
//         }
//         else if (value == 1)
//         {
//             if (!q.empty())
//             {
//                 cout << q.front() << endl;
//                 q.pop();
//             }
//             else
//             {
//                 cout << "Invalid" << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<string> q;

    while (n--)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            string nm;
            cin >> nm;
            q.push(nm);
        }
        else if (val == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}