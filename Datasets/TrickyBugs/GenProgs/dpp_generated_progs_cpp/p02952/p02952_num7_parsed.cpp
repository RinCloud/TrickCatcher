#include <iostream>

int countOddDigitNumbers(int N) {
    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        int digits = 0;
        int num = i;
        
        while (num > 0) {
            num /= 10;
            digits++;
        }
        
        if (digits % 2 != 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N;
    std::cin >> N;
    
    int result = countOddDigitNumbers(N);
    std::cout << result << std::endl;
    
    return 0;
}
