#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int curIndex = v.size() - 1;
    while (curIndex != 0)
    {
        int parentIndex = (curIndex - 1) / 2;
        if (v[parentIndex] < v[curIndex])
            swap(v[parentIndex], v[curIndex]);
        else
            break;
        curIndex = parentIndex;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size()] - 1;
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int leftIndex = cur * 2 + 1;
        int rightIndex = cur * 2 + 2;
        int lastIndex = v.size() - 1;
        if (leftIndex <= lastIndex && rightIndex <= lastIndex)
        {
            // duitai achy
            if (v[leftIndex] >= v[rightIndex] && v[leftIndex] > v[cur])
            {
                swap(v[leftIndex], v[cur]);
                cur = leftIndex;
            }
            else if (v[rightIndex] >= v[leftIndex] && v[rightIndex] > v[cur])
            {
                swap(v[rightIndex], v[cur]);
                cur = rightIndex;
            }
            else
            {
                break;
            }
        }
        else if (leftIndex <= lastIndex)
        {
            // left achy
            if (v[leftIndex] > v[cur])
            {
                swap(v[leftIndex], v[cur]);
                cur = leftIndex;
            }
            else
            {
                break;
            }
        }
        else if (rightIndex <= lastIndex)
        {
            // right achy
            if (v[rightIndex] > v[cur])
            {
                swap(v[rightIndex], v[cur]);
                cur = rightIndex;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;
}