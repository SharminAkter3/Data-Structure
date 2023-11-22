#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// input
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kory ana
        Node *p = q.front();
        q.pop();

        // 2. ja ja kaj achy ta kora
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        // connection
        p->left = myLeft;
        p->right = myRight;

        // 3. children golo ky push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
};

// output
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree empty" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.
        Node *f = q.front();
        q.pop();

        // 2.
        cout << f->val << " ";

        // 3. agy childer achy kina check korbo ..then line e rakhbo
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftNode = convert(a, n, l, mid - 1);
    Node *rightNode = convert(a, n, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node *root = convert(a, n, 0, n - 1);
    level_order(root);
    return 0;
}