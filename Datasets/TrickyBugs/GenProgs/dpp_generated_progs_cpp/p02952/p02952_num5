#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        int numDigits = 0;
        int temp = i;
        
        // Count the number of digits in the current number
        while (temp != 0) {
            temp /= 10;
            numDigits++;
        }
        
        // If the number of digits is odd, increment the count
        if (numDigits % 2 != 0) {
            count++;
        }
    }
    
    std::cout << count << "\n";

    return 0;
}