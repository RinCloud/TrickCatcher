#include <iostream>
#include <vector>

const int MOD = 1000000007;

// Function to calculate factorial modulo MOD
long long factorialMod(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate power modulo MOD
long long powerMod(long long base, long long exp)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp = exp / 2;
    }
    return result;
}

// Function to calculate inverse modulo MOD
long long inverseMod(long long num)
{
    return powerMod(num, MOD - 2);
}

int main()
{
    int N, K;
    std::cin >> N >> K;

    if (K == 1)
    {
        std::cout << N + 1 << std::endl;
    }
    else
    {
        std::vector<long long> fact(N + 1);
        fact[0] = 1;
        for (int i = 1; i <= N; i++)
        {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        long long result = 0;
        for (int i = 0; i < K; i++)
        {
            long long numerator = (fact[N] * inverseMod(fact[i])) % MOD;
            long long denominator = (fact[N - i] * inverseMod(fact[K - i])) % MOD;

            result = (result + (numerator * denominator) % MOD) % MOD;
        }

        std::cout << result << std::endl;
    }

    return 0;
}