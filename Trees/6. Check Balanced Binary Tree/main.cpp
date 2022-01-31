#include <iostream>
#include <vector>
#include <queue>
#include "../Tree.cpp"
using namespace std;

int heightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    return 1 + max(leftHeight, rightHeight);
}

bool checkBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    return (abs(heightOfTree(root->left) - heightOfTree(root->right)) <= 1) && checkBalanced(root->left) && checkBalanced(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    cout << checkBalanced(root);
    return 0;
}

/*
                    1
                   / \
                  2   3
                 / \   \
                4   5   7
*/