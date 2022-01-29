#include <iostream>
#include <vector>
#include <queue>
#include "../Tree.cpp"
using namespace std;

vector<int> BFS(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        ans.push_back(temp->data);
    }
    return ans;
}

vector<vector<int>> BFS2(Node *root)
{
    vector<vector<int>> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> val;
        while (size--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            val.push_back(temp->data);
        }
        ans.push_back(val);
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
    vector<vector<int>> ans = BFS2(root);
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