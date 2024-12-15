#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

// Function to find the maximum number of times the operation can be applied
int findMaxOperations(int N) {
    int operations = 0;
    
    while (N > 1) {
        int maxZ = 1;
        
        // Find the largest prime power divisor of N
        for (int i = 2; i * i <= N; i++) {
            if (isPrime(i) && (N % i == 0)) {
                maxZ = max(maxZ, i);
            }
        }
        
        if (maxZ == 1) {
            break;
        }
        
        // Reduce N by dividing it by maxZ
        N /= maxZ;
        operations++;
    }
    
    return operations;
}

int main() {
    int N;
    cin >> N;
    
    int maxOperations = findMaxOperations(N);
    
    cout << maxOperations << endl;
    
    return 0;
}