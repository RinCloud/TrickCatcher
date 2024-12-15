#include <iostream>
#include <climits>

using namespace std;

int calculateSumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int K;
    cin >> K;

    int minSum = INT_MAX;
    for (int i = 1; i <= K; i++) {
        if (K % i == 0) {
            int sum = calculateSumOfDigits(i);
            minSum = min(minSum, sum);
        }
    }

    cout << minSum << endl;

    return 0;
}