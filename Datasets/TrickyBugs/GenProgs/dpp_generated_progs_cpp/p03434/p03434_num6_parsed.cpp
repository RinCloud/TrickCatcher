#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> cards(N);
    for(int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }

    std::sort(cards.rbegin(), cards.rend());

    int aliceScore = 0;
    int bobScore = 0;

    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) {
            aliceScore += cards[i];
        } else {
            bobScore += cards[i];
        }
    }

    std::cout << aliceScore - bobScore;

    return 0;
}