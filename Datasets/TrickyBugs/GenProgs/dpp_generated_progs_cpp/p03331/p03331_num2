#include <iostream>
#include <cmath>

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

    int minSum = N;
    for (int A = 1; A <= N / 2; A++) {
        int B = N - A;
        int sum = sumOfDigits(A) + sumOfDigits(B);
        minSum = std::min(minSum, sum);
    }

    std::cout << minSum << std::endl;
    
    return 0;
}