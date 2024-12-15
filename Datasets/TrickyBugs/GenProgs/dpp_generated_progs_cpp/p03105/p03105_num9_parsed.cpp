#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    
    int num_times = B / A;
    if (num_times > C) {
        num_times = C;
    }
    
    std::cout << num_times << std::endl;
    
    return 0;
}