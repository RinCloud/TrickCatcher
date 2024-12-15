#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    int N;
    std::cin >> N;
    std::vector<long long> cards(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }

    std::sort(cards.begin(), cards.end());

    long long snuke_sum = 0;
    long long raccoon_sum = 0;

    for (int i = 0; i < N; i++) {
        if (i < N / 2) {
            snuke_sum += cards[i];
        }
        else {
            raccoon_sum += cards[i];
        }
    }

    long long diff = std::abs(snuke_sum - raccoon_sum);

    std::cout << diff;

    return 0;
}