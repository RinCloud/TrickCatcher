#include <iostream>

int main() {
    int H, W;
    std::cin >> H >> W;
    
    // Determine the minimum possible value of S_max - S_min based on the dimensions of the chocolate bar
    int answer = 0;
    if (H % 3 == 0 || W % 3 == 0) {
        answer = 0;
    } else {
        int min_diff = std::min(H, W);
        answer = min_diff / 3 + 1;
    }
    
    std::cout << answer << std::endl;
    
    return 0;
}