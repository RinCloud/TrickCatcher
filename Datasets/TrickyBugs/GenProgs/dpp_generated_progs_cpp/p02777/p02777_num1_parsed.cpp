#include <iostream>
#include <string>

int main() {
    std::string S, T;
    int A, B;
    std::string U;
    
    // Read input
    std::cin >> S >> T;
    std::cin >> A >> B;
    std::cin >> U;
    
    // Count the number of balls with string S and T after removing a ball with string U
    int count_S = (U == S) ? (A - 1) : A;
    int count_T = (U == T) ? (B - 1) : B;
    
    // Print the result
    std::cout << count_S << " " << count_T << std::endl;
    
    return 0;
}