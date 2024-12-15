#include <iostream>
#include <string>

int main() {
    std::string S, T;
    std::cin >> S >> T;
    
    int correctDays = 0;
    for (int i = 0; i < 3; i++) {
        if (S[i] == T[i]) {
            correctDays++;
        }
    }
    
    std::cout << correctDays << std::endl;
    
    return 0;
}
