#include <iostream>

using namespace std;

// Function to find the number of trailing zeros in the factorial of a number
int findTrailingZeros(int n) {
    int count = 0;
    
    // Keep dividing n by powers of 5 and add the quotient to count
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    
    return count;
}

// Recursive function to calculate f(n)
long long f(int n) {
    if (n < 2) {
        return 1;
    }
    
    return n * f(n - 2);
}

int main() {
    // Read input N
    int N;
    cin >> N;
    
    // Calculate f(N)
    long long result = f(N);
    
    // Find the number of trailing zeros in the decimal notation of f(N)
    int trailingZeros = findTrailingZeros(result);
    
    // Print the result
    cout << trailingZeros << endl;
    
    return 0;
}