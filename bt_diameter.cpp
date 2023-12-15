#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
    int data;
    node *left, *right;
};

node* newNode(int);

int diameter(node *root, int *height)
{
    int lh=0, rh=0; //left height right height

    int ld=0, rd=0; //left diameter right diameter

    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    ld =diameter(root->left, &lh);  //recursion
    rd =diameter(root->right, &rh);

    *height = max(lh,rh) + 1;

    return (max(rh+lh+1, max(ld,rd)));
}

node* newNode(int val)
{
    node *nptr;
    nptr = new node();
    nptr->data = val;
    nptr->left = NULL;
    nptr->right = NULL;

    return(nptr);
}

int main()
{
    /*
                 1   root = 1
               /  \
              2   3
             /\   /
            5  4  6   diameter = 5
    */
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->left = newNode(5);
    root->right->left = newNode(6);

    int height = 0;

    cout << "Diameter of the binary tree = " << diameter(root,&height) << endl;

    return 0;
}