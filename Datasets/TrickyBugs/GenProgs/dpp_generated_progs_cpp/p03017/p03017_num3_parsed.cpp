#include <iostream>
#include <string>

int main() {
    int N, A, B, C, D;
    std::cin >> N >> A >> B >> C >> D;
    std::string S;
    std::cin >> S;

    // Check if there is any rock between B and C
    for (int i = B - 1; i < C - 1; i++) {
        if (S[i] == '#' && S[i + 1] == '#') {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    // Check if Snuke can reach C before Fnuke reaches D
    if (C < D) {
        for (int i = B - 1; i < D - 1; i++) {
            if (S[i] == '.' && S[i + 1] == '.' && S[i + 2] == '.') {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        }
        std::cout << "No" << std::endl;
        return 0;
    }

    // Check if Fnuke can reach D before Snuke reaches C
    if (C > D) {
        for (int i = B; i < C - 1; i++) {
            if (S[i] == '.' && S[i + 1] == '.' && S[i + 2] == '.') {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        }
        std::cout << "No" << std::endl;
        return 0;
    }

    std::cout << "Yes" << std::endl;
    return 0;
}