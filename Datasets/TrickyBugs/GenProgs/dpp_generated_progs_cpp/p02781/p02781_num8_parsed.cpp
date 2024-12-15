#include <iostream>
#include <string>

int countIntegers(int N, int K) {
    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        std::string numStr = std::to_string(i);
        int nonZeroDigits = 0;
        
        for (char digit : numStr) {
            if (digit != '0') {
                nonZeroDigits++;
            }
        }
        
        if (nonZeroDigits == K) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N, K;
    std::cin >> N >> K;
    
    int result = countIntegers(N, K);
    std::cout << result << std::endl;
    
    return 0;
}