#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kthSmallest(vector<int> arr, int k)
{
    priority_queue<int> queue;
    for (int i = 0; i < arr.size(); i++)
    {
        queue.push(arr[i]);
        if (queue.size() > k)
        {
            queue.pop();
        }
    }
    return queue.top();
}

int main()
{
    vector<int> v = {7, 10, 4, 3, 20, 15};
    cout << kthSmallest(v, 3);
    return 0;
}