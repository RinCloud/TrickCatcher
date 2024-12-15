#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int x = 0;
    int y = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'N') {
            y++;
        } else if (S[i] == 'W') {
            x--;
        } else if (S[i] == 'S') {
            y--;
        } else if (S[i] == 'E') {
            x++;
        }
    }

    if (x == 0 && y == 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}