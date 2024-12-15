#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S, T;
    std::cin >> S >> T;

    int minChanges = S.length();

    for (int i = 0; i <= (S.length() - T.length()); i++) {
        int changes = 0;
        for (int j = 0; j < T.length(); j++) {
            if (S[i + j] != T[j]) {
                changes++;
            }
        }
        minChanges = std::min(minChanges, changes);
    }

    std::cout << minChanges << std::endl;

    return 0;
}