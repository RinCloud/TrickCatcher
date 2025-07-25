#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;
    
    // Initialize all digits with -1
    std::vector<int> digits(N, -1);

    for (int i = 0; i < M; i++) {
        int s, c;
        std::cin >> s >> c;
        
        // Check if current position is already assigned
        if (digits[s-1] != -1 && digits[s-1] != c) {
            std::cout << -1 << std::endl;
            return 0;
        }
        
        // Assign digit
        digits[s-1] = c;
    }
    
    // Check constraints for first digit
    if (digits[0] == 0 && N > 1) {
        std::cout << -1 << std::endl;
        return 0;
    }
    
    // Replace unassigned digits with 0, except the first digit
    for (int i = 1; i < N; i++) {
        if (digits[i] == -1) {
            digits[i] = 0;
        }
    }
    
    // Print the number
    for (int digit : digits) {
        std::cout << digit;
    }
    std::cout << std::endl;
    
    return 0;
}
