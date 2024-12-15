#include <iostream>

int main() {
    int K;
    std::cin >> K;
    
    int evenCount = K / 2;
    int oddCount = K - evenCount;
    
    int pairCount = evenCount * oddCount;
    
    std::cout << pairCount << std::endl;
    
    return 0;
}