#include <iostream>
using namespace std;

int trailingZeros(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number / 5;
        number /= 5;
    }
    return sum;
}

int main()
{
    cout << trailingZeros(5);
    return 0;
}