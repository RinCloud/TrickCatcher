#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> diceRolls(N);
    for (int i = 0; i < N; i++) {
        std::cin >> diceRolls[i].first >> diceRolls[i].second;
    }

    for (int i = 0; i < N - 2; i++) {
        if (diceRolls[i].first == diceRolls[i].second && diceRolls[i+1].first == diceRolls[i+1].second && diceRolls[i+2].first == diceRolls[i+2].second) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}