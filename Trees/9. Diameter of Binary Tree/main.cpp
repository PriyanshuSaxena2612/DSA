#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
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

int diameterOfTree1(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int maxDia = INT32_MIN;
    int nodeHeight = 1 + heightOfTree(root->left) + heightOfTree(root->right);
    diameterOfTree1(root->left);
    diameterOfTree1(root->right);
    if (maxDia < nodeHeight)
    {
        maxDia = nodeHeight;
    }
    return maxDia;
}

int heightOfTree2(Node *root)
{
    int maxDia = INT32_MIN;
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = heightOfTree2(root->left);
    int rightHeight = heightOfTree2(root->right);
    maxDia = max(maxDia, 1 + leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->left->left->left = new Node(5);
    root->left->right->right = new Node(7);
    root->left->right->right->left = new Node(9);
    root->left->right->right->right = new Node(8);
    cout << heightOfTree2(root);
    return 0;
}

/*
                    1
                   / \
                  2   3
                 / \   \
                4   5   7
*/