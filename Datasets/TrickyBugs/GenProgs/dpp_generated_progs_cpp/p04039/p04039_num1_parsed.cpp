#include <iostream>
#include <vector>
#include <algorithm>

bool containsDislikedDigits(int num, const std::vector<int>& dislikedDigits) {
    while (num > 0) {
        int digit = num % 10;
        if (std::find(dislikedDigits.begin(), dislikedDigits.end(), digit) != dislikedDigits.end()) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> dislikedDigits(K);
    for (int i = 0; i < K; i++) {
        std::cin >> dislikedDigits[i];
    }

    int amount = N;
    while (containsDislikedDigits(amount, dislikedDigits)) {
        amount++;
    }

    std::cout << amount << std::endl;

    return 0;
}
