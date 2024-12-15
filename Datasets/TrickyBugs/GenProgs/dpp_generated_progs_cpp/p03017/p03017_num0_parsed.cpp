#include <iostream>
#include <string>

bool isPossible(int N, int A, int B, int C, int D, std::string& S) {
    // Check if there is a rock between Snuke and Fnuke
    for (int i = B; i <= D; i++) {
        if (S[i - 1] == '#' && S[i] == '#') {
            return false;
        }
    }

    // Check if Snuke can reach C before Fnuke reaches D
    if (C < D) {
        for (int i = B; i <= D; i++) {
            if (S[i - 1] == '.' && S[i] == '.' && S[i + 1] == '.') {
                return true;
            }
        }
        return false;
    }

    // Check if Snuke can reach C and Fnuke can reach D simultaneously
    for (int i = A; i <= C; i++) {
        if (S[i - 1] == '.' && S[i] == '.' && S[i + 1] == '.') {
            return true;
        }
    }

    return false;
}

int main() {
    int N, A, B, C, D;
    std::string S;
    std::cin >> N >> A >> B >> C >> D >> S;

    if (isPossible(N, A, B, C, D, S)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}