#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::unordered_map<int, std::vector<char>> grid;

    for (int i = 0; i < N; i++) {
        int x, y;
        char c;
        std::cin >> x >> y >> c;

        int r = x % (2 * K);
        int s = y % (2 * K);

        if (r >= K) {
            r -= K;
        }

        if (s >= K) {
            s -= K;
        }
        
        int key = r * K + s;
        grid[key].push_back(c);
    }

    int max_desires = 0;

    for (const auto& entry : grid) {
        const std::vector<char>& squares = entry.second;
        int black_count = 0;
        int white_count = 0;

        for (char c : squares) {
            if (c == 'B') {
                black_count++;
            } else {
                white_count++;
            }
        }

        max_desires += std::max(black_count, white_count);
    }

    std::cout << max_desires << std::endl;

    return 0;
}