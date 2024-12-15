#include <iostream>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;

    int min_difference = INT_MAX;
    for (int i = 1; i <= K; i++) {
        if (N % i == 0) {
            int user_crackers = N / i;
            min_difference = std::min(min_difference, N - user_crackers * i);
        }
    }

    std::cout << min_difference << std::endl;

    return 0;
}