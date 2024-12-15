#include <iostream>
#include <string>
#include <algorithm>

std::string restore_string(const std::string& S, const std::string& T) {
    int n = S.size();
    int m = T.size();

    for (int i = n - m; i >= 0; i--) {
        bool possible = true;
        for (int j = 0; j < m; j++) {
            if (S[i + j] != '?' && S[i + j] != T[j]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            std::string restored = S;
            for (int j = 0; j < m; j++) {
                restored[i + j] = T[j];
            }
            for (int j = 0; j < n; j++) {
                if (restored[j] == '?') {
                    restored[j] = 'a';
                }
            }
            return restored;
        }
    }

    return "UNRESTORABLE";
}

int main() {
    std::string S, T;
    std::cin >> S >> T;

    std::string result = restore_string(S, T);
    std::cout << result << std::endl;

    return 0;
}