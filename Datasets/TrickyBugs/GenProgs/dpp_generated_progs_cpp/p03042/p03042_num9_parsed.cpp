#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    
    bool isYYMM = false;
    bool isMMYY = false;
    
    int year = std::stoi(S.substr(0, 2));
    int month = std::stoi(S.substr(2, 2));

    if (year >= 1 && year <= 12) {
        isMMYY = true;
    }

    if (month >= 1 && month <= 12) {
        isYYMM = true;
    }

    if (isYYMM && isMMYY) {
        std::cout << "AMBIGUOUS" << std::endl;
    } else if (isYYMM) {
        std::cout << "YYMM" << std::endl;
    } else if (isMMYY) {
        std::cout << "MMYY" << std::endl;
    } else {
        std::cout << "NA" << std::endl;
    }
    
    return 0;
}
