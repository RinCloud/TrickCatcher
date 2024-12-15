#include <iostream>
#include <vector>
#include <string>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;
    
    int maxLen = 0;
    
    // Loop through all possible lengths of substrings
    for (int len = 1; len < N; len++) {
        // Check if there are two substrings of length len that occur more than once in S without overlapping
        for (int i = 0; i < N - len * 2 + 1; i++) {
            std::string sub1 = S.substr(i, len);
            std::string sub2 = S.substr(i + len, len);
            
            if (sub1 == sub2) {
                maxLen = len;
                break;
            }
        }
    }
    
    std::cout << maxLen << std::endl;
    
    return 0;
}