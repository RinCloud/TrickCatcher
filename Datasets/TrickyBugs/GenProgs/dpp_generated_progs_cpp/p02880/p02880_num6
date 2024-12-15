#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    bool found = false;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j == N) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    if (found) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}