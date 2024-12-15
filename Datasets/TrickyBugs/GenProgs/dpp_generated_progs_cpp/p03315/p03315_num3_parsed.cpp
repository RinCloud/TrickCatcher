#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int mind = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '+') {
            mind += 1;
        } else {
            mind -= 1;
        }
    }

    std::cout << mind << std::endl;

    return 0;
}