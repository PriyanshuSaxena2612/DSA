#include <iostream>
#include <unordered_set>
using namespace std;

bool pairEquals(int arr[], int n, int sum)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == sum && i != j)
    //         {
    //             return true;
    //         }
    //     }
    // }
    // return false;
    unordered_set<int> set;
    for(int i = 0; i < n; i++)
    {
        if(set.find(sum - arr[i]) != set.end())
        {
            return false;
        } 
    }
}

int main()
{
    int arr[] = {2, 1, 6, 3};
    int sum = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << pairEquals(arr, n, sum);
    return 0;
}