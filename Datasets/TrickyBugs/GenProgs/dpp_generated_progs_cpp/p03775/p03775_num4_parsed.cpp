#include <iostream>

int main() {
    long long N;
    std::cin >> N;
    
    int min_value = 11; // set to maximum possible value initially
    
    for (long long A = 1; A * A <= N; A++) {
        if (N % A == 0) {
            long long B = N / A;
            int digits_A = 0;
            int digits_B = 0;
            
            while (A > 0) {
                digits_A++;
                A /= 10;
            }
            
            while (B > 0) {
                digits_B++;
                B /= 10;
            }
            
            min_value = std::min(min_value, std::max(digits_A, digits_B));
        }
    }
    
    std::cout << min_value << std::endl;
    
    return 0;
}