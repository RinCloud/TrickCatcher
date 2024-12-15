#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MOD = 1000000007;

// Function to calculate the power of a number
int power(int x, int y, int p)
{
    int res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

// Function to calculate the modulo inverse of a number
int modInverse(int n, int p)
{
    return power(n, p - 2, p);
}

// Function to calculate the binomial coefficient
int binomialCoeff(int n, int k, int p)
{
    int fact[n + 1];
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % p;

    return (fact[n] * modInverse((fact[k] * fact[n - k]) % p, p)) % p;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int sum1 = 0;
        int sum2 = 0;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                sum1 += a[j];
                sum2 += b[j];
            }
        }

        int temp = binomialCoeff(sum1 + sum2, sum1, MOD);
        ans = (ans + temp) % MOD;
    }

    cout << ans << endl;

    return 0;
}