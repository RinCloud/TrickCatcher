#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> votes(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> votes[i];
    }
    
    std::sort(votes.begin(), votes.end(), std::greater<int>());

    int threshold = votes[M - 1] / (4 * M);
    if (votes[M - 1] >= threshold) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}