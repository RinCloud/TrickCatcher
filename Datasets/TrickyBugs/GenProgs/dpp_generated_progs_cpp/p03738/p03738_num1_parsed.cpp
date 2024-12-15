#include <iostream>
#include <string>

int main() {
    std::string A, B;
    std::cin >> A >> B;
    
    if (A == B) {
        std::cout << "EQUAL";
    } else if (A.size() > B.size()) {
        std::cout << "GREATER";
    } else if (A.size() < B.size()) {
        std::cout << "LESS";
    } else {
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] > B[i]) {
                std::cout << "GREATER";
                return 0;
            } else if (A[i] < B[i]) {
                std::cout << "LESS";
                return 0;
            }
        }
        std::cout << "EQUAL";
    }
    
    return 0;
}