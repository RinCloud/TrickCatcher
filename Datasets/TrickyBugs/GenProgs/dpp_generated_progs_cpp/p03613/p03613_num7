#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());
    
    int maxCount = 0;
    int minX = a[0];
    int maxX = a[N-1];
    
    for (int X = minX; X <= maxX; ++X) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            count += std::abs(a[i] - X);
        }
        maxCount = std::max(maxCount, count);
    }
    
    std::cout << maxCount << std::endl;
    
    return 0;
}