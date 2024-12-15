#include <iostream>
#include <string>

int main() {
    std::string A, B;
    std::cin >> A >> B;

    if (A.length() > B.length()) {
        std::cout << "GREATER" << std::endl;
    } else if (A.length() < B.length()) {
        std::cout << "LESS" << std::endl;
    } else {
        int comparison = A.compare(B);
        if (comparison > 0) {
            std::cout << "GREATER" << std::endl;
        } else if (comparison < 0) {
            std::cout << "LESS" << std::endl;
        } else {
            std::cout << "EQUAL" << std::endl;
        }
    }

    return 0;
}