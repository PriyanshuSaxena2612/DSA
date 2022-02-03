#include <iostream>
using namespace std;

const int N = 1e5;
int dp[N + 1]{0};

int factorial(int number)
{
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        dp[i] = i * dp[i - 1];
    }
    return dp[number];
}

int main()
{
    cout << factorial(5);
    return 0;
}