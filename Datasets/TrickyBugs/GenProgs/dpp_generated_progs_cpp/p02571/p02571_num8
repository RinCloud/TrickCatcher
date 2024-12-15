#include <iostream>
#include <string>

int minimumChanges(std::string S, std::string T) {
    int n = S.length();
    int m = T.length();
    int minChanges = n; // Initialize minimum number of changes to maximum possible value
    
    // Iterate through all possible starting indices of the substring in S
    for (int i = 0; i <= n - m; i++) {
        int changes = 0; // Number of changes required for current starting index
        
        // Compare characters of T with corresponding characters in S
        for (int j = 0; j < m; j++) {
            if (T[j] != S[i + j]) {
                changes++; // Increment changes if characters don't match
            }
        }
        
        minChanges = std::min(minChanges, changes); // Update minimum changes
    }
    
    return minChanges;
}

int main() {
    std::string S, T;
    std::cin >> S >> T;
    
    int result = minimumChanges(S, T);
    std::cout << result << std::endl;
    
    return 0;
}