#include <iostream>
using namespace std;

int countDigits(int number)
{
    int count = 0;
    if (number == 0)
    {
        return 1;
    }
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

int main()
{
    int number;
    cin >> number;
    cout << countDigits(number) << "\n";
    return 0;
}