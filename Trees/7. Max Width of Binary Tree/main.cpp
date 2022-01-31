#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include "../Tree.cpp"
using namespace std;

int maxWidthOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    vector<int> ans;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        Node *front = q.front();
        q.pop();
        if (front->left)
        {
            q.push(front->left);
        }
        if (front->right)
        {
            q.push(front->right);
        }
        ans.push_back(size);
    }
    return *max_element(ans.begin(), ans.end());
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    // root->right = new Node(3);
    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->right = new Node(7);
    cout << maxWidthOfTree(root);
    return 0;
}

/*
                    1
                   / \
                  2   3
                 / \   \
                4   5   7
*/