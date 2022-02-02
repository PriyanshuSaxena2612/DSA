#include <iostream>
#include <vector>
#include "../Tree.cpp"
using namespace std;

bool searchBST(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == key)
    {
        return true;
    }
    else if (root->data < key)
    {
        return searchBST(root->right, key);
    }
    else
    {
        return searchBST(root->left, key);
    }
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    cout << searchBST(root, 80);
    return 0;
}

/*
                     15
                   /    \
                  5      20
                 /      /  \
                3       18  80
                       /
                      16 
*/