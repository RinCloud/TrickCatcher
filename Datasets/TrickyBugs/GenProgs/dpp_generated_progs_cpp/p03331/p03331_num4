#include <iostream>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;

    int minSum = INT_MAX;
    for (int i = 1; i < N; i++) {
        int sumA = sumOfDigits(i);
        int sumB = sumOfDigits(N - i);
        int totalSum = sumA + sumB;

        if (totalSum < minSum) {
            minSum = totalSum;
        }
    }

    std::cout << minSum;

    return 0;
}