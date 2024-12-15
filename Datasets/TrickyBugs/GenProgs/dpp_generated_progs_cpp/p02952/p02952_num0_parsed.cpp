#include <iostream>

int countOddDigits(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (std::to_string(i).length() % 2 != 0) {
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