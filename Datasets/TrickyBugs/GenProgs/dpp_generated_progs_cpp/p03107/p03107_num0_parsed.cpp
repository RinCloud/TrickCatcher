#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int count = 0;
    for (int i = 0; i < S.length() - 1; i++) {
        if (S[i] != S[i + 1]) {
            count++;
            i++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
