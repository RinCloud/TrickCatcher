#include <iostream>
#include <vector>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to find the maximum number of times the operation can be applied
int maxOperations(int N)
{
    int count = 0;
    vector<int> primes;

    // Check for all numbers less than or equal to N/2
    for (int i = 2; i <= N / 2; i++)
    {
        // Check if i is prime and it divides N
        if (isPrime(i) && N % i == 0)
        {
            primes.push_back(i);
        }
    }

    // Check for all prime numbers in primes vector
    for (int i = 0; i < primes.size(); i++)
    {
        int p = primes[i];
        int e = 1;
        int z = p;

        // Repeatedly apply the operation until N is not divisible by z
        while (N % z == 0)
        {
            N /= z;
            count++;
            z = p;
            for (int j = 1; j <= e; j++)
            {
                z *= p;
            }
            e++;
        }
    }

    return count;
}

int main()
{
    int N;
    cin >> N;

    int maxOps = maxOperations(N);
    cout << maxOps;

    return 0;
}