#include <iostream>
#include <unordered_set>
using namespace std;

int countUnionElements(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> set(arr1, arr1 + m);
    for (int i = 0; i < n; i++)
    {
        set.insert(arr2[i]);
    }
    return set.size();
}

int main()
{
    int arr1[] = {1, 1, 1};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 1};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << countUnionElements(arr1, m, arr2, n);
    return 0;
}