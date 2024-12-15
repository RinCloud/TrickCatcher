#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;
    
    int minSum = 999999;
    
    // Iterate through all possible splits of N into two positive integers
    for (int A = 1; A < N; A++) {
        int B = N - A;
        
        // Calculate the sum of digits of A
        int sumA = 0;
        std::string strA = std::to_string(A);
        for (char c : strA) {
            sumA += c - '0';
        }
        
        // Calculate the sum of digits of B
        int sumB = 0;
        std::string strB = std::to_string(B);
        for (char c : strB) {
            sumB += c - '0';
        }
        
        // Update the minimum sum if necessary
        int currSum = sumA + sumB;
        if (currSum < minSum) {
            minSum = currSum;
        }
    }
    
    std::cout << minSum << std::endl;
    
    return 0;
}