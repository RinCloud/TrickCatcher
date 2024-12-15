#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int count = 0;
    int sockets = 1;
    
    while (sockets < B) {
        sockets += (A - 1);
        count++;
    }
    
    std::cout << count << std::endl;
    
    return 0;
}