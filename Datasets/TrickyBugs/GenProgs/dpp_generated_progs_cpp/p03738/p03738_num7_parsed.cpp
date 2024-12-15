#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string A, B;
    std::cin >> A >> B;

    if (A.length() > B.length()) {
        std::cout << "GREATER";
    } else if (A.length() < B.length()) {
        std::cout << "LESS";
    } else {
        if (A > B) {
            std::cout << "GREATER";
        } else if (A < B) {
            std::cout << "LESS";
        } else {
            std::cout << "EQUAL";
        }
    }

    return 0;
}