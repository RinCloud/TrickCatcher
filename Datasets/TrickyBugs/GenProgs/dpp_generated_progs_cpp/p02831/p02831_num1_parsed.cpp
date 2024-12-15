#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int gcd = 1;
    for(int i = 1; i <= A && i <= B; i++) {
        if(A % i == 0 && B % i == 0) {
            gcd = i;
        }
    }
    
    int lcm = (A * B) / gcd;
    
    std::cout << lcm << std::endl;
    
    return 0;
}