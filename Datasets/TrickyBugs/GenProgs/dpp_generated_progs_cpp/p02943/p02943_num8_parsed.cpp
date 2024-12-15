#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int N, K;
    std::string S;
    std::cin >> N >> K >> S;
    
    // Reverse S
    std::string T = S;
    std::reverse(T.begin(), T.end());
    
    // Concatenate S and T
    std::string U = S + T;
    
    // Find the lexicographically smallest substring of length N from U
    std::string smallest = U.substr(0, N);
    
    // Perform the operation K times
    for (int i = 1; i < K; i++) {
        // Shift the lexicographically smallest substring to the right
        std::rotate(smallest.begin(), smallest.begin() + 1, smallest.end());
        
        // Update the lexicographically smallest substring if a smaller one is found
        std::string current = U.substr(i, N);
        smallest = std::min(smallest, current);
    }
    
    // Print the lexicographically smallest possible string after K operations
    std::cout << smallest << std::endl;
    
    return 0;
}