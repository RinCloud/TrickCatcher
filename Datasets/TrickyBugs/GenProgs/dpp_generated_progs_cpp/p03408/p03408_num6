#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    int N, M;
    std::unordered_map<std::string, int> blueCards, redCards;

    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::string card;
        std::cin >> card;
        blueCards[card]++;
    }

    std::cin >> M;
    for (int i = 0; i < M; ++i) {
        std::string card;
        std::cin >> card;
        redCards[card]++;
    }

    int maxEarned = 0;
    for (const auto& card : blueCards) {
        maxEarned = std::max(maxEarned, card.second - redCards[card.first]);
    }

    std::cout << maxEarned << std::endl;

    return 0;
}