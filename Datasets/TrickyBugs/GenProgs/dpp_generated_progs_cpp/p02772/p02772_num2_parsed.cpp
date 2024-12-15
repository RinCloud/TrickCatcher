#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    bool allowed = true;
    
    for (int i = 0; i < N; i++) {
        int num;
        std::cin >> num;
        
        if (num % 2 == 0 && (num % 3 != 0 && num % 5 != 0)) {
            allowed = false;
        }
    }
    
    if (allowed) {
        std::cout << "APPROVED" << std::endl;
    } else {
        std::cout << "DENIED" << std::endl;
    }
    
    return 0;
}
