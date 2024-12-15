#include <iostream>
#include <string>

std::string compareMagnitudes(const std::string& A, const std::string& B) {
    if (A.size() > B.size()) return "GREATER";
    if (A.size() < B.size()) return "LESS";
    if (A > B) return "GREATER";
    if (A < B) return "LESS";
    return "EQUAL";
}

int main() {
    std::string A, B;
    std::cin >> A >> B;
    std::cout << compareMagnitudes(A, B) << std::endl;
    return 0;
}