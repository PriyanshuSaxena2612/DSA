#include <iostream>
#include <unordered_map>
using namespace std;

void frequency(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (auto i : map)
    {
        cout << i.first << " " << i.second << "\n";
    }
}

int main()
{
    int arr[] = {5, 7, 5, 3, 9, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, n);
    return 0;
}