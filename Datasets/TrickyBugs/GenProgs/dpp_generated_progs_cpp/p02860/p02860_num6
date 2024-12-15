#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    
    // Read input
    std::cin >> N;
    std::cin >> S;
    
    // Check if S is a concatenation of two copies of some string
    int half_length = N / 2;
    std::string first_half = S.substr(0, half_length);
    std::string second_half = S.substr(half_length);
    
    if (first_half == second_half) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}