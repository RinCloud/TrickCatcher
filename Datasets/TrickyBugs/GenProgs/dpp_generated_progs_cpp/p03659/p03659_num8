#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }

    std::sort(cards.begin(), cards.end());

    int snuke_sum = cards[0];
    int raccoon_sum = 0;
    for (int i = 1; i < N; i++) {
        raccoon_sum += cards[i];
    }

    int min_difference = std::abs(snuke_sum - raccoon_sum);

    for (int i = 1; i < N - 1; i++) {
        snuke_sum += cards[i];
        raccoon_sum -= cards[i];
        min_difference = std::min(min_difference, std::abs(snuke_sum - raccoon_sum));
    }

    std::cout << min_difference << std::endl;

    return 0;
}