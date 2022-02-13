#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void kLargestElements(vector<int> arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> queue;
    for (int i = 0; i < arr.size(); i++)
    {
        queue.push(arr[i]);
        if (queue.size() > k)
        {
            queue.pop();
        }
    }
    while (!queue.empty())
    {
        cout << queue.top() << " ";
        queue.pop();
    }
}

int main()
{
    vector<int> v = {7, 10, 4, 3, 20, 15};
    kLargestElements(v, 3);
    return 0;
}