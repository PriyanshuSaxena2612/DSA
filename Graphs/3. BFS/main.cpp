#include "../Graph.cpp"
int main()
{
    Graph g(6);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 5);
    g.addEdge(3, 5);
    g.addEdge(3, 4);
    g.addEdge(5, 6);
    g.printAdjacencyList();
    cout << "\n";
    vector<int> bfs = g.BFS();
    for (auto i : bfs)
    {
        cout << i << " ";
    }
    return 0;
}

/*
    1: 2, 
    2: 1, 3, 5,
    3: 2, 5, 4,
    4: 3,
    5: 2, 3, 6,
    6: 5,
*/