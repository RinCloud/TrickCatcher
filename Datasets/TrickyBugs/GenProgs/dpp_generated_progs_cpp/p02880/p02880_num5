#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    bool canRepresent = false;
    
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j == N) {
                canRepresent = true;
                break;
            }
        }
        if (canRepresent) {
            break;
        }
    }
    
    if (canRepresent) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    
    return 0;
}