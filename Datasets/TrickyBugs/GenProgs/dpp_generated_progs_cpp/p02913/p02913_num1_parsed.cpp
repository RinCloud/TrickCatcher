#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;

    int maxLen = 0;

    // Iterate from the longest substring length possible down to the smallest
    for (int len = N - 1; len >= 1; len--) {
        // Check if there exists two non-overlapping substrings of length "len" that are the same
        std::unordered_set<std::string> substrings;

        for (int i = 0; i <= N - len * 2; i++) {
            std::string substr = S.substr(i, len);

            if (substrings.count(substr) > 0) {
                maxLen = len;
                break;
            }
            substrings.insert(substr);
        }

        if (maxLen > 0) {
            break;
        }
    }

    std::cout << maxLen << std::endl;

    return 0;
}
