#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S, T;
    std::cin >> S >> T;

    int min_change = S.size();

    for (int i = 0; i < S.size() - T.size() + 1; i++) {
        int change = 0;
        for (int j = 0; j < T.size(); j++) {
            if (S[i + j] != T[j]) {
                change++;
            }
        }
        min_change = std::min(min_change, change);
    }

    std::cout << min_change << std::endl;

    return 0;
}