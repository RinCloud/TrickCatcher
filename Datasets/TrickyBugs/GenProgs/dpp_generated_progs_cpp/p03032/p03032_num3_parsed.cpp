#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // Read the values of jewels
    deque<int> jewels(N);
    for (int i = 0; i < N; i++) {
        cin >> jewels[i];
    }

    int maxSum = 0;

    // Perform operations A, B, C, D, in pairs
    for (int i = 0; i <= min(N, K); i++) {
        for (int a = 0; a <= i; a++) {
            int b = i - a;

            // Create a copy of the jewels
            deque<int> temp = jewels;

            // Perform operations A and B
            for (int k = 0; k < a; k++) {
                if (!temp.empty()) {
                    temp.pop_front();
                }
            }
            for (int k = 0; k < b; k++) {
                if (!temp.empty()) {
                    temp.pop_back();
                }
            }

            // Perform operations C and D
            for (int k = 0; k < K - i; k++) {
                if (!temp.empty() && temp.front() < 0) {
                    temp.pop_front();
                } else if (!temp.empty() && temp.back() < 0) {
                    temp.pop_back();
                } else {
                    break;
                }
            }

            // Calculate the sum of jewel values in temp
            int sum = 0;
            for (int val : temp) {
                sum += val;
            }

            // Update maxSum if necessary
            maxSum = max(maxSum, sum);
        }
    }

    // Print the maximum possible sum
    cout << maxSum << endl;

    return 0;
}