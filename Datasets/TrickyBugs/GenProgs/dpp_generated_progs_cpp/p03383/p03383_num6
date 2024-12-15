#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool isSymmetric(const std::vector<std::string>& grid) {
    int H = grid.size();
    int W = grid[0].size();
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] != grid[H - 1 - i][W - 1 - j]) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int H, W;
    std::cin >> H >> W;
    
    std::vector<std::string> grid(H);
    for (int i = 0; i < H; i++) {
        std::cin >> grid[i];
    }
    
    bool result = isSymmetric(grid);
    if (result) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    
    return 0;
}