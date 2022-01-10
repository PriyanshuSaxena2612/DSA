#include <iostream>
#include <vector>
using namespace std;

void printAdjacencyList(vector<pair<int, int>> adj[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (auto x : adj[i])
        {
            cout << "\t" << x.first << " is weighted " << x.second << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    vector<pair<int, int>> adjacencyList[nodes + 1];
    for (int i = 0; i < edges; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        adjacencyList[node1].push_back({node2, weight});
        adjacencyList[node2].push_back({node1, weight});
    }
    printAdjacencyList(adjacencyList, nodes);
    return 0;
}