#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::unordered_set<int>> foods(N);

    for (int i = 0; i < N; i++) {
        int K;
        std::cin >> K;
        for (int j = 0; j < K; j++) {
            int food;
            std::cin >> food;
            foods[i].insert(food);
        }
    }

    int count = 0;
    for (int food = 1; food <= M; food++) {
        bool likedByAll = true;
        for (int i = 0; i < N; i++) {
            if (foods[i].find(food) == foods[i].end()) {
                likedByAll = false;
                break;
            }
        }
        if (likedByAll) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}