#include <iostream>

// Function to calculate the number of trailing zeros in the decimal notation of f(N)
int countTrailingZeros(int n) {
    int count = 0;
    while (n % 10 == 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Function to calculate f(N)
long long calculateF(int N) {
    if (N < 2) {
        return 1;
    }

    long long result = N * calculateF(N - 2);
    return result;
}

int main() {
    int N;
    std::cin >> N;

    long long factorialN = calculateF(N);
    int trailingZeros = countTrailingZeros(factorialN);

    std::cout << trailingZeros << std::endl;

    return 0;
}
