#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> groups;
    for (int i = 0; i < N; i++) {
        int l, r;
        std::cin >> l >> r;
        groups.push_back(std::make_pair(l, r));
    }

    std::vector<int> seats(100001, 0);

    for (auto group : groups) {
        for (int i = group.first; i <= group.second; i++) {
            seats[i]++;
        }
    }

    int count = 0;
    for (int i = 1; i <= 100000; i++) {
        if (seats[i] > 0) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}