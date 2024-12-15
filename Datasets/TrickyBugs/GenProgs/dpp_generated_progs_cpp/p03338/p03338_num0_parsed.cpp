#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

int main() {
    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;

    int maxDiffLetters = 0;
    for (int i = 0; i < N - 1; i++) {
        std::unordered_set<char> lettersX;
        std::unordered_set<char> lettersY;

        // Count letters in X
        for (int j = 0; j <= i; j++) {
            lettersX.insert(S[j]);
        }

        // Count letters in Y
        for (int j = i + 1; j < N; j++) {
            lettersY.insert(S[j]);
        }

        // Count different letters in both X and Y
        int diffLetters = 0;
        for (char c : lettersX) {
            if (lettersY.count(c) > 0) {
                diffLetters++;
            }
        }

        maxDiffLetters = std::max(maxDiffLetters, diffLetters);
    }

    std::cout << maxDiffLetters << std::endl;

    return 0;
}