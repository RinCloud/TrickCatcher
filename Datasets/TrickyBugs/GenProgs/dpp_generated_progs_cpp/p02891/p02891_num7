#include <iostream>
#include <string>

int main() {
    std::string S;
    long long K;
    std::cin >> S >> K;

    int n = S.size();
    
    // If S has only one character, we need K/2 operations to make any two adjacent characters different
    if (n == 1) {
        std::cout << K / 2 << std::endl;
        return 0;
    }
    
    // Count the number of consecutive characters in S
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (S[i] == S[i - 1]) {
            count++;
        } else {
            break;
        }
    }
    
    int result = 0;
    if (count == n) {
        // If all characters in S are the same, we need to change the first character to make any two adjacent characters different
        result = count * K / 2;
    } else {
        // Otherwise, we need to change the first and the last character to make any two adjacent characters different
        result = count / 2 + (n - count) / 2;
        result *= K;
        
        // If there are characters in T between the first and the last character, we need extra operations
        if (count % 2 == 1 && (n - count) % 2 == 1) {
            result++;
        }
    }
    
    std::cout << result << std::endl;
    
    return 0;
}