#include <iostream>
#include <unordered_map>
using namespace std;

int countCommonElements(int arr1[], int m, int arr2[], int n)
{
    int count = 0;
    unordered_map<int, int> map1;
    unordered_map<int, int> map2;
    for (int i = 0; i < m; i++)
    {
        map1[arr1[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        map2[arr2[i]]++;
    }
    for (auto i : map1)
    {
        if (map2.find(i.first) != map1.end())
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr1[] = {10, 20};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {30, 20};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << countCommonElements(arr1, m, arr2, n);
    return 0;
}