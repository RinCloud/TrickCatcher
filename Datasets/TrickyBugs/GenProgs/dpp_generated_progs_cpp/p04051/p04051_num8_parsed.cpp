#include <iostream>
#include <vector>

// Define the modulo value
const int MOD = 1000000007;

// Function to calculate the factorial of a number
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate the modular inverse of a number
long long modInverse(int n)
{
    long long result = 1;
    int p = MOD - 2;
    while (p)
    {
        if (p % 2)
        {
            result = (result * n) % MOD;
        }
        n = (n * n) % MOD;
        p >>= 1;
    }
    return result;
}

int main()
{
    // Read the input
    int N;
    std::cin >> N;

    // Create vectors to store the number of beef and green pepper pieces in each pack
    std::vector<int> beef(N);
    std::vector<int> greenPepper(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> beef[i] >> greenPepper[i];
    }

    // Initialize the result to 1
    long long result = 1;

    // Calculate the total number of skewer combinations
    long long totalSkewerCombinations = (factorial(N) * modInverse(factorial(N - 2))) % MOD;

    // Calculate the total number of piece combinations for each pack
    for (int i = 0; i < N; i++)
    {
        long long pieceCombinations = (factorial(beef[i] + greenPepper[i]) * modInverse(factorial(beef[i]))) % MOD;
        pieceCombinations = (pieceCombinations * modInverse(factorial(greenPepper[i]))) % MOD;
        result = (result * pieceCombinations) % MOD;
    }

    // Calculate the final result by multiplying the total skewer combinations and the piece combinations
    result = (result * totalSkewerCombinations) % MOD;

    // Print the result
    std::cout << result << std::endl;

    return 0;
}