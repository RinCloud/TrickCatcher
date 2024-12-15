#include <iostream>
#include <string>

int main() {
    // Read the input values
    int N;
    std::string S;
    std::cin >> N >> S;
    
    std::string T;
    
    // Check if string S can be formed by concatenating two copies of string T
    if (N % 2 == 0 && S.substr(0, N/2) == S.substr(N/2)) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    
    return 0;
}