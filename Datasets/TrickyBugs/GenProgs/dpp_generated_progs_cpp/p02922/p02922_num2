#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int strips = 0;
    int sockets = 1;
    
    while (sockets < B) {
        sockets += A - 1;
        strips++;
    }
    
    std::cout << strips << std::endl;
    
    return 0;
}