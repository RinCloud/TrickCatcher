#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the maximum number of times the operation can be applied
int findMaxOperations(int N) {
    int maxOperations = 0;
    vector<int> primes;
    
    // Add 2 to the list of primes if it divides N
    if (N % 2 == 0) {
        primes.push_back(2);
        while (N % 2 == 0) {
            N /= 2;
        }
        maxOperations++;
    }
    
    // Iterate from 3 to sqrt(N) to find all the prime factors of N
    for (int i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0 && isPrime(i)) {
            primes.push_back(i);
            while (N % i == 0) {
                N /= i;
            }
            maxOperations++;
        }
    }
    
    // Check if N is a prime number greater than 2
    if (N > 2 && isPrime(N)) {
        primes.push_back(N);
        maxOperations++;
    }
    
    // Print the maximum number of times the operation can be applied
    return maxOperations;
}

int main() {
    int N;
    cin >> N;
    
    // Find the maximum number of times the operation can be applied
    int maxOperations = findMaxOperations(N);
    
    cout << maxOperations << endl;
    
    return 0;
}