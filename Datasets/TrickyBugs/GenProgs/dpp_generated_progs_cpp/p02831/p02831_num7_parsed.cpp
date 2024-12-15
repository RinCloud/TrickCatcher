#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int lcm = A * B;
    while (A % B != 0) {
        int temp = A % B;
        A = B;
        B = temp;
    }
    lcm /= B;
    
    std::cout << lcm << std::endl;
    
    return 0;
}