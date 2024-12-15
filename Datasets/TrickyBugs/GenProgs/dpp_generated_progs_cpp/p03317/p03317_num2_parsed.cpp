#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> sequence(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> sequence[i];
    }

    int operations = 0;

    // Find the number of blocks needed to make all elements equal
    int blocks = (N + K - 2) / (K - 1);

    // Perform the operations on each block
    for (int i = 0; i < blocks; ++i) {
        int blockMin = *std::min_element(sequence.begin() + i * (K - 1), sequence.begin() + std::min((i + 1) * (K - 1), N));
        operations++;
    
        // Replace the elements in the block with the minimum value
        for (int j = i * (K - 1); j < std::min((i + 1) * (K - 1), N); ++j) {
            sequence[j] = blockMin;
        }
    }

    std::cout << operations << std::endl;

    return 0;
}