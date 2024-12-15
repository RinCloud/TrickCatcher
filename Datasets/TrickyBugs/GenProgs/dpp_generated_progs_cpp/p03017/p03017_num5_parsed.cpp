#include <iostream>
#include <string>

int main() {
    int N, A, B, C, D;
    std::string S;
    std::cin >> N >> A >> B >> C >> D >> S;

    bool possible = true;

    for (int i = A; i < C; i++) {
        if (S[i - 1] == '#' && S[i] == '#') {
            possible = false;
            break;
        }
    }

    for (int i = B; i < D; i++) {
        if (S[i - 1] == '#' && S[i] == '#') {
            possible = false;
            break;
        }
    }

    if (!possible) {
        std::cout << "No" << std::endl;
    }
    else {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}