#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute the power of a number modulo MOD
int power(int x, int y)
{
    int res = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

int main()
{
    int N, M, K;
    cin >> N >> M >> K;

    int total_numbers = N + M;
    int valid_sets = (total_numbers - 1) / (K - 1);

    // Calculate the coefficient of binomial expansion
    vector<vector<int>> dp(valid_sets + 1, vector<int>(valid_sets + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= valid_sets; i++)
    {
        dp[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    // Calculate the number of different possible values
    int ans = 0;
    for (int i = 0; i <= valid_sets; i++)
    {
        ans = (ans + dp[valid_sets][i]) % MOD;
    }

    // Calculate the power of 2 modulo MOD
    int power_2 = power(2, N) % MOD;

    // Calculate the final result
    int result = (ans * power_2) % MOD;

    cout << result << endl;

    return 0;
}