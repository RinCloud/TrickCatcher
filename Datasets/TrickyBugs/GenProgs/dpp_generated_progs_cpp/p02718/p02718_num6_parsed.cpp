#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> votes(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> votes[i];
    }

    std::sort(votes.rbegin(), votes.rend());

    int totalVotes = 0;
    for (int i = 0; i < M; ++i) {
        totalVotes += votes[i];
    }

    int threshold = totalVotes / (4 * M);

    if (votes[M-1] >= threshold) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}