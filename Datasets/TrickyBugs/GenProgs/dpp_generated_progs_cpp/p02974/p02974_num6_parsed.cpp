#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate factorial modulo MOD
int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = (res * i) % MOD;
    }
    return res;
}

// Function to calculate modular inverse of a under modulo MOD
int modInverse(int a)
{
    int b = MOD - 2;
    int res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}

// Function to calculate number of permutations with oddness k
int calculatePermutations(int n, int k)
{
    vector<vector<int>> dp(n + 1, vector<int>(k + 1));

    // Base case: dp[i][0] = 1 for all i
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            // Calculate dp[i][j] using recurrence relation
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (j - i >= 0)
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - i]) % MOD;
            }
        }
    }

    // Return number of permutations with oddness k
    return dp[n][k];
}

int main()
{
    int n, k;
    cin >> n >> k;

    int res = calculatePermutations(n, k);
    cout << res << endl;

    return 0;
}