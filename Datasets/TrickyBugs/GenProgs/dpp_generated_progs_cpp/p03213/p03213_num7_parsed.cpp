#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the prime factors of a number
vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }
    return factors;
}

// Function to calculate the number of divisors of a number
int calculateDivisors(vector<int> factors) {
    vector<int> primes;
    int count = 1;
    
    // Calculate the frequency of each prime factor
    for (int i = 0; i < factors.size(); i++) {
        if (find(primes.begin(), primes.end(), factors[i]) == primes.end()) {
            int freq = count(factors.begin(), factors.end(), factors[i]);
            primes.push_back(factors[i]);
            count *= (freq + 1);
        }
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;
    
    // Calculate the prime factors of N!
    vector<int> factors = primeFactors(N);
    
    // Calculate the number of Shichi-Go numbers
    int shichiGoCount = 0;
    for (int i = 1; i <= N; i++) {
        vector<int> numFactors = primeFactors(i);
        int divisorCount = calculateDivisors(numFactors);
        
        if (divisorCount == 75) {
            shichiGoCount++;
        }
    }
    
    // Output the result
    cout << shichiGoCount << endl;
    
    return 0;
}