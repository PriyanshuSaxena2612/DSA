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
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    int diameter = 1 + leftHeight + rightHeight;
    return max(diameter, max(leftHeight, rightHeight));
}

vector<vector<int>> spiralTraversal(Node *root)
{
    queue<Node *> q;
    vector<vector<int>> ans;
    q.push(root);
    int count = 0;
    while (!q.empty())
    {
        vector<int> temp;
        int size = q.size();
        while (size--)
        {
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
            temp.push_back(front->data);
        }
        if (count % 2 == 1)
        {
            reverse(temp.begin(), temp.end());
        }
        count++;
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    // cout << heightOfTree(root);
    return 0;
}

/*
                    1
                   / \
                  2   3
                 / \   \
                4   5   7
*/