#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    int nodes, edges;
    vector<int> *adjacencyList;

public:
    Graph(int nodes)
    {
        this->nodes = nodes;
        adjacencyList = new vector<int>[nodes + 1];
    }
    void addEdge(int i, int j, bool undirected = true)
    {
        adjacencyList[i].push_back(j);
        if (undirected)
        {
            adjacencyList[j].push_back(i);
        }
    }
    vector<int> BFS(int source)
    {
        vector<int> bfs;
        vector<int> visited(nodes + 1, 0);
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        for (int i = 1; i <= nodes; i++)
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    bfs.push_back(node);
                    for (auto j : adjacencyList[i])
                    {
                        if (!visited[j])
                        {
                            q.push(j);
                            visited[j] = 1;
                        }
                    }
                }
            }
        }
        return bfs;
    }
    void printAdjacencyList()
    {
        for (int i = 1; i <= nodes; i++)
        {
            cout << i << ": ";
            for (auto x : adjacencyList[i])
            {
                cout << x << ", ";
            }
            cout << "\n";
        }
    }
};