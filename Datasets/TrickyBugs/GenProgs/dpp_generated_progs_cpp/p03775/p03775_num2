#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int N;
    cin >> N;
    
    int minDigits = INT_MAX;
    for (long long int A = 1; A <= sqrt(N); A++) {
        if (N % A == 0) {
            long long int B = N / A;
            int digitsA = log10(A) + 1;
            int digitsB = log10(B) + 1;
            int maxDigits = max(digitsA, digitsB);
            minDigits = min(minDigits, maxDigits);
        }
    }
    
    cout << minDigits << endl;
    
    return 0;
}