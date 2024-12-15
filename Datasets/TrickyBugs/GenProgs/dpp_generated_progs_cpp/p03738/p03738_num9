#include <iostream>
#include <string>
#include <algorithm>

std::string compareMagnitudes(const std::string& A, const std::string& B) {
    if (A.size() > B.size()) {
        return "GREATER";
    }
    else if (A.size() < B.size()) {
        return "LESS";
    }
    else {
        if (A > B) {
            return "GREATER";
        }
        else if (A < B) {
            return "LESS";
        }
        else {
            return "EQUAL";
        }
    }
}

int main() {
    std::string A, B;
    std::cin >> A >> B;

    std::string result = compareMagnitudes(A, B);

    std::cout << result << std::endl;

    return 0;
}