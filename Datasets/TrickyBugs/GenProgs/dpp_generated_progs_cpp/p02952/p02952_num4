#include <iostream>

int countOddDigits(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        int numDigits = 0;
        int temp = i;
        while (temp > 0) {
            numDigits++;
            temp /= 10;
        }
        if (numDigits % 2 == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    std::cin >> N;

    int result = countOddDigits(N);
    std::cout << result << std::endl;

    return 0;
}