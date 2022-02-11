#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {5, 7, 3, 2, 4, 9};
    priority_queue<int> pq(v.begin(), v.end());
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}