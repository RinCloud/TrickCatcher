#include <iostream>
#include <algorithm>

int main() {
    int H, W;
    std::cin >> H >> W;
    
    if (H % 3 == 0 || W % 3 == 0) {
        std::cout << 0;
        return 0;
    }
    
    int ans = H;
    for (int i = 1; i < H; i++) { // cut horizontally
        int min_area = std::min(i * W, (H - i) * (W / 2));
        int max_area = std::max(i * W, (H - i) * (W / 2));
        ans = std::min(ans, max_area - min_area);
    }
    
    for (int i = 1; i < W; i++) { // cut vertically
        int min_area = std::min(i * H, (W - i) * (H / 2));
        int max_area = std::max(i * H, (W - i) * (H / 2));
        ans = std::min(ans, max_area - min_area);
    }
    
    std::cout << ans;
    
    return 0;
}