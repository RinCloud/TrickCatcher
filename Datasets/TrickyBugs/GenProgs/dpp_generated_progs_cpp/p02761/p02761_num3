#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;
    
    std::string num(N, ' '); // Initialize a string of N digits with spaces
    
    for (int i = 0; i < M; i++) {
        int s, c;
        std::cin >> s >> c;
        
        // Check if the digit position is already filled or the digit value is invalid
        if (num[s - 1] != ' ' && num[s - 1] != ('0' + c)) {
            std::cout << -1 << std::endl;
            return 0;
        }
        
        num[s - 1] = '0' + c; // Fill the digit with the given value
    }
    
    // If the first digit is 0, return -1 since leading zeros are not allowed
    if (num[0] == '0') {
        std::cout << -1 << std::endl;
        return 0;
    }
    
    // Find the smallest integer not less than 0 satisfying the given conditions
    for (int i = 0; i < N; i++) {
        if (num[i] == ' ') {
            num[i] = '0';
        }
    }
    
    std::cout << num << std::endl;
    
    return 0;
}