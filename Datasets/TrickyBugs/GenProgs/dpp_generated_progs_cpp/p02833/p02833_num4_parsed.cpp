#include <iostream>

// Function to calculate the number of trailing zeros in the decimal notation of f(N)
int calculateTrailingZeros(long long int N) {
    int count = 0;
    
    while (N >= 5) {
        N /= 5;
        count += N;
    }
    
    return count;
}

int main() {
    long long int N;
    std::cin >> N;
    
    int trailingZeros = calculateTrailingZeros(N);
    std::cout << trailingZeros << std::endl;
    
    return 0;
}