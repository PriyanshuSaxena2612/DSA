#include <iostream>
#include <vector>
#include <queue>
#include "../Tree.cpp"
using namespace std;

vector<int> leftView(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
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
            if (i == 0)
            {
                ans.push_back(temp->data);
            }
        }
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
    vector<int> ans = leftView(root);
    for (auto i : ans)
    {
        cout << i << " ";
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