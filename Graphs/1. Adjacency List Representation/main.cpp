#include <iostream>
#include <vector>
using namespace std;

void printAdjacencyList(vector<int> adj[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (auto x : adj[i])
        {
            cout << x << ", ";
        }
        cout << "\n";
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> adjacencyList[nodes + 1];
    for (int i = 0; i < edges; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }
    printAdjacencyList(adjacencyList, nodes);
    return 0;
}