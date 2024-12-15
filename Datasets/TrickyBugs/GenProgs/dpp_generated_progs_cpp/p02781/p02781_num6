#include <iostream>
#include <string>

using namespace std;

int countIntegersWithKNonZeroDigits(long long N, int K) {
    int count = 0;

    // Loop through all integers from 1 to N
    for (long long i = 1; i <= N; i++) {
        // Convert the current integer to string
        string s = to_string(i);

        int nonZeroDigits = 0;
        // Count the number of non-zero digits
        for (char c : s) {
            if (c != '0') {
                nonZeroDigits++;
            }
        }
        // If the number of non-zero digits is equal to K, increment the count
        if (nonZeroDigits == K) {
            count++;
        }
    }

    return count;
}

int main() {
    long long N;
    int K;

    // Read the input values
    cin >> N >> K;

    // Find the count of integers with K non-zero digits
    int result = countIntegersWithKNonZeroDigits(N, K);

    // Print the result
    cout << result << endl;

    return 0;
}