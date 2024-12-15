#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Read the input N
    long long N;
    cin >> N;

    // Find the minimum value of F(A,B)
    int minDigits = INT_MAX;
    for (long long A = 1; A <= sqrt(N); A++) {
        if (N % A == 0) {
            long long B = N / A;
            int digitsA = ceil(log10(A + 0.1));
            int digitsB = ceil(log10(B + 0.1));
            int maxDigits = max(digitsA, digitsB);
            minDigits = min(minDigits, maxDigits);
        }
    }
    
    // Print the minimum value of F(A,B)
    cout << minDigits << endl;

    return 0;
}