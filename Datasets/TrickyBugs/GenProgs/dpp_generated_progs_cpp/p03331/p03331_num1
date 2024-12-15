#include <iostream>
#include <cmath>

int sumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;

    int minSum = INT_MAX;
    for(int i = 1; i < N; i++) {
        int a = i;
        int b = N - i;

        int sum = sumOfDigits(a) + sumOfDigits(b);
        if(sum < minSum) {
            minSum = sum;
        }
    }

    std::cout << minSum << std::endl;

    return 0;
}