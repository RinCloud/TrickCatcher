#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    
    int times = B / A;
    if (times > C) {
        times = C;
    }
    
    std::cout << times << std::endl;
    
    return 0;
}