#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    // Prime number sieve to generate prime factorization
    bool isPrime[N+1];
    std::fill(isPrime, isPrime + N+1, true);
    for (int p = 2; p*p <= N; p++) {
        if (isPrime[p]) {
            for (int i = p*p; i <= N; i += p) {
                isPrime[i] = false;
            }
        }
    }
    
    // Generate prime factorization of N!
    int factorCounts[N+1] = {0};
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            int p = i;
            while (p <= N) {
                factorCounts[i] += N/p;
                p *= i;
            }
        }
    }
    
    // Count the number of Shichi-Go numbers
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (factorCounts[i] >= 74) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}