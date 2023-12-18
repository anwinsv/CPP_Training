#include<iostream>
#include<algorithm>
using namespace std;

class node //structure of a node
{
    int data;
public:
    node(int a = 0)
    {
        data = a;
    }
    node *left;
    node *right;
};

int maxDepth(node *n)  //function to find the max depth of BT
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        int ldepth=0, rdepth=0;
        ldepth = maxDepth(n->left);
        rdepth = maxDepth(n->right);

        if(ldepth > rdepth)
        return (ldepth+1);
        else
        return (rdepth+1);
    }
}

node *newNode(int val)
{
    node *nptr;
    nptr = new node(val);
    nptr->left = NULL;
    nptr->right = NULL;

    return(nptr);
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left = newNode(2);
    root->left->right->right = newNode(10);
    root->left->left->left = newNode(7);
    root->left->left->right = newNode(8);
    root->left->left->right->left = newNode(9);
    root->right = newNode(3);
    root->right->left = newNode(14);
    root->right->left->left = newNode(12);
    root->right->left->right = newNode(13);
    root->right->right = newNode(11);
    root->right->right->right = newNode(2);
    
    cout << "Max Depth of the binary tree = " << maxDepth(root) << endl;
    return 0;
}