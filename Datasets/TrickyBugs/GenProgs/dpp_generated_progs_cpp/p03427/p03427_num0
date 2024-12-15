#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of digits in a number
int sumOfDigits(long long n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Function to find the maximum possible sum of digits not greater than N
int maxSumOfDigits(long long N) {
    // Calculate the sum of digits of N
    int sumOfN = sumOfDigits(N);

    // Iterate from 1 until the sumOfN
    // to find the maximum sum of digits
    for (int i = 1; i <= sumOfN; i++) {
        long long num = N;
        vector<int> digits;

        // Break down the number into its digits
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        // Calculate the sum of digits in each combination
        // and check if it is equal to i
        for (int j = 0; j < digits.size(); j++) {
            int sum = 0;

            for (int k = 0; k <= j; k++) {
                sum += digits[k];
            }

            // If the sum is equal to i, return i
            if (sum == i) {
                return i;
            }
        }
    }

    return -1;  // Return -1 if no valid sum is found
}

int main() {
    long long N;
    cin >> N;

    // Find the maximum possible sum of digits not greater than N
    int maxSum = maxSumOfDigits(N);

    cout << maxSum << endl;

    return 0;
}