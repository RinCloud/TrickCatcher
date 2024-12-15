#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to get the maximum number of times the operation can be applied
int getMaxOperations(int N) {
    vector<int> operations;
    int count = 0;
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0 && isPrime(i)) {
            operations.push_back(i);
            N /= i;
            count++;
        }
    }
    if (N > 1) {
        operations.push_back(N);
        count++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    int maxOperations = getMaxOperations(N);
    cout << maxOperations << endl;
    return 0;
}