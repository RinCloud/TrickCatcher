#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string A, B;
    std::cin >> A >> B;

    if (A.size() > B.size())
        std::cout << "GREATER" << std::endl;
    else if (A.size() < B.size())
        std::cout << "LESS" << std::endl;
    else {
        if (A > B)
            std::cout << "GREATER" << std::endl;
        else if (A < B)
            std::cout << "LESS" << std::endl;
        else
            std::cout << "EQUAL" << std::endl;
    }

    return 0;
}