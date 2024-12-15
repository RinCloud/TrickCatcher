#include <iostream>
#include <string>

int main() {
    std::string A, B;
    std::cin >> A >> B;
    
    int length = A.length();
    
    int result = -1;
    int operations = length;
    
    for (int i = 0; i < length; i++) {
        int shifts = i;
        int flips = 0;
        
        std::string tempA = A;
        
        for (int j = 0; j < length; j++) {
            if (B[j] == '1') {
                int index = (j + shifts) % length;
             if (tempA[index] == '0') {
                    flips++;
                }
            }
        }
        
        if (tempA == B && flips < operations) {
            result = flips;
            operations = flips;
        }
    }
    
    std::cout << result << std::endl;
    
    return 0;
}