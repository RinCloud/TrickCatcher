#include <iostream>
#include <algorithm>

int main() {
    int W, a, b;
    std::cin >> W >> a >> b;
    int R = std::max(a, b) - std::min(a + W, b + W);
    std::cout << std::max(R, 0) << std::endl;
    return 0;
}