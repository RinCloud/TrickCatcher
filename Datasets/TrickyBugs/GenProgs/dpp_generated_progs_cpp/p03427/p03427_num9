#include <iostream>
using namespace std;

// Function to find the sum of digits of a number
int sumOfDigits(long long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to find the maximum possible sum of digits
int findMaxSumOfDigits(long long N) {
    long long limit = N / 9 * 9; // Find the largest multiple of 9 less than or equal to N
    int maxSum = sumOfDigits(limit);

    // Check if N is a multiple of 9
    if (N % 9 == 0) {
        return maxSum;
    } else {
        int remSum = sumOfDigits(N); // Sum of digits of N
        return remSum > maxSum ? remSum : maxSum;
    }
}

int main() {
    long long N;
    cin >> N;
    cout << findMaxSumOfDigits(N) << endl;
    return 0;
}