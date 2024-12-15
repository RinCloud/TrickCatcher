#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    
    bool isPlayable = true;
    
    for (int i = 0; i < S.length(); i++) {
        if (i % 2 == 0) { // Even position
            if (S[i] == 'R') {
                isPlayable = false;
                break;
            }
        } else { // Odd position
            if (S[i] == 'L') {
                isPlayable = false;
                break;
            }
        }
    }
    
    if (isPlayable) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}