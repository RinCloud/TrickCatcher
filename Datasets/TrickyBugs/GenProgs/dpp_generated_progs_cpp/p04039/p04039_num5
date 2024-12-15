#include <iostream>
#include <string>

bool isDisliked(int num, const int* disliked, int k) {
    std::string str = std::to_string(num);
    for (int i = 0; i < str.length(); i++) {
        int digit = str[i] - '0';
        for (int j = 0; j < k; j++) {
            if (digit == disliked[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int N, K;
    std::cin >> N >> K;
    int disliked[K];
    for (int i = 0; i < K; i++) {
        std::cin >> disliked[i];
    }

    int amount = N;
    while (isDisliked(amount, disliked, K)) {
        amount++;
    }

    std::cout << amount << std::endl;

    return 0;
}