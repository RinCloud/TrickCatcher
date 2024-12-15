#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> rolls(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> rolls[i].first >> rolls[i].second;
    }

    for (int i = 0; i < N - 2; ++i) {
        if (rolls[i].first == rolls[i].second && rolls[i+1].first == rolls[i+1].second && rolls[i+2].first == rolls[i+2].second) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }

    std::cout << "No" << std::endl;

    return 0;
}