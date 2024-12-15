#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> foods(N, std::vector<int>(M+1, 0));

    for (int i = 0; i < N; i++) {
        int K;
        std::cin >> K;
        for (int j = 0; j < K; j++) {
            int food;
            std::cin >> food;
            foods[i][food] = 1;
        }
    }

    int count = 0;
    for (int food = 1; food <= M; food++) {
        bool likedByAll = true;
        for (int i = 0; i < N; i++) {
            if (foods[i][food] == 0) {
                likedByAll = false;
                break;
            }
        }
        if (likedByAll) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}