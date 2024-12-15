#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    bool isEasilyPlayable = true;
    for (int i = 0; i < S.length(); i++) {
        if ((i % 2 == 0 && (S[i] == 'L' || S[i] == 'U')) ||
            (i % 2 != 0 && (S[i] == 'R' || S[i] == 'U'))) {
            isEasilyPlayable = false;
            break;
        }
    }

    if (isEasilyPlayable) {
        std::cout << "Yes" <<std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}