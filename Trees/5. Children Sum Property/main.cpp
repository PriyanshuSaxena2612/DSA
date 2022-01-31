#include <iostream>
#include <vector>
#include <queue>
#include "../Tree.cpp"
using namespace std;

bool childrenSumProperty(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return true;
    }
    int sum = 0;
    if (root->left)
    {
        sum += root->left->data;
    }
    if (root->right)
    {
        sum += root->right->data;
    }
    return (root->data == sum) && childrenSumProperty(root->left) && childrenSumProperty(root->right);
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(6);
    cout << childrenSumProperty(root);
    return 0;
}

/*
                    20
                   / \
                  8   12
                 / \   
                3   5   
*/