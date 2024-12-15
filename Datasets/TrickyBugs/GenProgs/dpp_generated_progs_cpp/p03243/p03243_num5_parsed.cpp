#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int x = N / 111;
    if (N % 111 > 0) {
        x++;
    }
    
    std::cout << x * 111 << std::endl;
    
    return 0;
}