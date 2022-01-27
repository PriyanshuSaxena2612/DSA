#include <iostream>
#include <unordered_set>
using namespace std;

int distinctElements(int arr[], int n)
{
    unordered_set<int> set(arr, arr + n);
    return set.size();
}

int main()
{
    int arr[] = {5, 7, 5, 3, 9, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << distinctElements(arr, n) << "\n";
    return 0;
}