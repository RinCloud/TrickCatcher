#include <iostream>
#include <vector>

void lexicographicallySmallestSequence(int K, int N) {
    // Calculate the total number of sequences listed in FEIS
    int X = 1;  // Start with 1 since there is at least one sequence of length 1
    for (int i = 1; i <= N; i++) {
        X *= K;  // For each length, there are K possibilities for each position
    }

    // Calculate the (X/2)-th (rounded up to the nearest integer) lexicographically smallest sequence
    std::vector<int> sequence(N, 1);  // Start with the smallest sequence (all elements with 1)
    for (int i = N - 1; i >= 0; i--) {
        int remaining = X / K;  // Count of remaining sequences for the current position
        int idx = (X + 1) / 2;  // Index of the desired sequence for the current position

        while (sequence[i] < K && remaining < idx) {
            sequence[i]++;  // Increment the current position
            idx -= remaining;
        }

        X = remaining;
    }

    // Print the lexicographically smallest sequence
    for (int i = 0; i < N; i++) {
        std::cout << sequence[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Read input
    int K, N;
    std::cin >> K >> N;

    // Find and print the lexicographically smallest sequence
    lexicographicallySmallestSequence(K, N);

    return 0;
}