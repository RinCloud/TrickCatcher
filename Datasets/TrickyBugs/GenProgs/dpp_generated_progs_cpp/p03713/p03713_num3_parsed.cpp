#include <iostream>

int main() {
    int H, W;
    std::cin >> H >> W;

    // Divide the bar into three pieces with equal width
    // If H is divisible by 3, each piece will have H/3 blocks
    int s1 = H / 3;
    int s2 = H / 3;
    int s3 = H / 3;

    // If H is not divisible by 3, distribute the remaining blocks
    if (H % 3 == 1) {
        s3 += 1;
    } else if (H % 3 == 2) {
        s2 += 1;
        s3 += 1;
    }

    // Determine the minimum and maximum areas of the pieces
    int S_min = std::min(std::min(s1 * W, s2 * W), s3 * W);
    int S_max = std::max(std::max(s1 * W, s2 * W), s3 * W);

    std::cout << S_max - S_min << std::endl;

    return 0;
}