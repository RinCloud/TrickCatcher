#include <iostream>
#include <string>

int main() {
    int K;
    std::cin >> K;

    long long int num = 7 % K;
    for (int i = 1; i <= K; i++) {
        if (num == 0) {
            std::cout << i << std::endl;
            return 0;
        }
        num = (num * 10 + 7) % K;
    }

    std::cout << -1 << std::endl;

    return 0;
}