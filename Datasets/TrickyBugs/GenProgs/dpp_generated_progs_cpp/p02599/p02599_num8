#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int N, Q;
    std::cin >> N >> Q;

    std::vector<int> balls(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> balls[i];
    }

    std::vector<std::pair<int, int>> queries(Q);
    for (int i = 0; i < Q; ++i) {
        std::cin >> queries[i].first >> queries[i].second;
    }

    std::vector<int> distinctColors(Q);
    for (int i = 0; i < Q; ++i) {
        int l = queries[i].first - 1;  // Convert 1-indexed to 0-indexed
        int r = queries[i].second - 1; // Convert 1-indexed to 0-indexed

        std::unordered_set<int> colors;
        for (int j = l; j <= r; ++j) {
            colors.insert(balls[j]);
        }

        distinctColors[i] = colors.size();
    }

    for (int i = 0; i < Q; ++i) {
        std::cout << distinctColors[i] << std::endl;
    }

    return 0;
}