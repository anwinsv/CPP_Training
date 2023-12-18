#include <iostream>
#include<algorithm>
using namespace std;

class node
{
private:
    int val;
public:
    node *left, *right;

    node(int n)
    {
        val = n;
    }
};

node *newNode (int n)
{
    node *nptr;
    nptr = new node(n);
    nptr->left = nullptr;
    nptr->right = nullptr;

    return nptr;
}

int heightBalance(node *root)
{
    int lh=0,rh=0;

    if (root == NULL)
    return 0;

    lh = heightBalance(root->left);
    if (lh == -1)
    return -1;

    rh = heightBalance(root->right);
    if (rh == -1)
    return -1;

    if ((lh - rh) > 1)
    return -1;
    else
    return (max(lh,rh) + 1);
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->left = newNode(5);
    root->right->left = newNode(6);
    //root->left->left->left = newNode(7);
    //root->left->left->left->left = newNode(8);

    if (heightBalance(root) > 0)
    cout << "Balanced Binary Tree" << endl;
    else
    cout << "Not balanced" << endl;
    return 0;
}