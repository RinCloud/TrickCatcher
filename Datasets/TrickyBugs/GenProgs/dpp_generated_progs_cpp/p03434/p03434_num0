#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }

    std::sort(cards.begin(), cards.end(), std::greater<int>());

    int alice_score = 0;
    int bob_score = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            alice_score += cards[i];
        } else {
            bob_score += cards[i];
        }
    }

    int alice_minus_bob = alice_score - bob_score;

    std::cout << alice_minus_bob << std::endl;

    return 0;
}