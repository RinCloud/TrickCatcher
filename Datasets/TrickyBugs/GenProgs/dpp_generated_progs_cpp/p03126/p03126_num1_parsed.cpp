#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    // Create a vector to store the count of each food
    std::vector<int> count(M + 1, 0);

    // Read the input and update the count
    for (int i = 0; i < N; i++) {
        int K;
        std::cin >> K;
        for (int j = 0; j < K; j++) {
            int food;
            std::cin >> food;
            count[food]++;
        }
    }

    // Count the number of foods liked by all people
    int likedByAll = 0;
    for (int i = 1; i <= M; i++) {
        if (count[i] == N) {
            likedByAll++;
        }
    }

    std::cout << likedByAll << std::endl;

    return 0;
}