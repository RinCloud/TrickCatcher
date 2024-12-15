#include <iostream>
#include <cmath>

using namespace std;

long long maxDigitSum(long long N) {
    long long sum = 0;
    long long num = N;
    
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main() {
    long long N;
    cin >> N;
    
    long long maxSum = 0;
    for (long long i = 1; i <= floor(log10(N) + 1); i++) {
        long long num = pow(10, i) - 1;
        if (num <= N) {
            maxSum = max(maxSum, maxDigitSum(num));
        }
    }
    
    cout << maxSum << endl;
    
    return 0;
}