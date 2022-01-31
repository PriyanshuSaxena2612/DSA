#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include "../Tree.cpp"
using namespace std;

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
    vector<vector<int>> ans = spiralTraversal(root);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*
                    1
                   / \
                  2   3
                 / \   \
                4   5   7
*/