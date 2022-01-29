#include <iostream>
#include <vector>
#include "../Tree.cpp"
using namespace std;

void nodesAtK(Node *root, int K)
{
    if (root == NULL)
    {
        return;
    }
    if (K == 0)
    {
        cout << root->data << " ";
    }
    nodesAtK(root->left, K - 1);
    nodesAtK(root->right, K - 1);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    nodesAtK(root, 2);
    return 0;
}

/*
                    1
                   / \
                  2   3
                 / \   \
                4   5   7
*/