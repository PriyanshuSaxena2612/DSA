// The simple method is that:
// arr = {-3, 4, -3, -1, 1} -> take prefix sum -> {-1} -> {-3, 1} -> {-3, 1, -2} -> {-3, 1, -2, -3}
// Now we see that the element -3 repeats itself, because somewhere before it the sum would have been zero
// Hence the result will be returned as true if the element is repeated.
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool subarraySumZero(vector<int> arr)
{
    int prefixSum = 0;
    unordered_set<int> set;
    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i];
        if (set.find(prefixSum) != set.end())
        {
            return true;
        }
        if (prefixSum == 0)
        {
            return true;
        }
        set.insert(prefixSum);
    }
    return false;
}

int main()
{
    vector<int> arr = {-3, 4, -3, -1, 1};
    cout << subarraySumZero(arr);
    return 0;
}