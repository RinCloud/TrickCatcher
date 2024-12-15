#include <iostream>
#include <algorithm>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    
    // Calculate the number of red and blue blocks in the parallelepiped
    int redBlocks = A * B * C / 2;
    int blueBlocks = A * B * C - redBlocks;
    
    // Calculate the difference between the number of red and blue blocks
    int difference = std::abs(redBlocks - blueBlocks);
    
    std::cout << difference << std::endl;
    
    return 0;
}