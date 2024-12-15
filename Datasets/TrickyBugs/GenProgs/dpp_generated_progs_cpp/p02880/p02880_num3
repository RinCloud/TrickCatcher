#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    bool found = false;
    
    for (int i = 1; i <= 9; i++) {
        if (N % i == 0 && N / i <= 9) {
            found = true;
            break;
        }
    }
    
    if (found) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    
    return 0;
}