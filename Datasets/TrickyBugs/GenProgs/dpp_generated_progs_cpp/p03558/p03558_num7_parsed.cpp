#include <iostream>
#include <string>

int main() {
    int K;
    std::cin >> K;
    
    // Find the smallest positive multiple of K
    int multiple = K;
    while (true) {
        std::string digits = std::to_string(multiple);
        
        // Calculate the sum of the digits
        int sum = 0;
        for (char digit : digits) {
            sum += digit - '0';
        }
        
        // Check if the sum is divisible by K
        if (sum % K == 0) {
            std::cout << sum << "\n";
            break;
        }
        
        // Increment the multiple and continue searching
        multiple += K;
    }
    
    return 0;
}