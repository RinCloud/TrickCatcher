#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> groups(N);
    for (int i = 0; i < N; i++) {
        std::cin >> groups[i].first >> groups[i].second;
    }

    int totalPeople = 0;
    for (int i = 0; i < N; i++) {
        totalPeople += groups[i].second - groups[i].first + 1;
    }

    std::cout << totalPeople << std::endl;

    return 0;
}