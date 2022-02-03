#include <iostream>
using namespace std;

bool checkPalindrome(int number)
{
    if (number == 0)
    {
        return 1;
    }
    int rev = 0;
    int temp = number;
    while (temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return number == rev;
}

int main()
{
    int arr[] = {78987, 8668, 8, 21, 367};
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout << arr[i] << " " << checkPalindrome(arr[i]) << "\n";
    }
    return 0;
}