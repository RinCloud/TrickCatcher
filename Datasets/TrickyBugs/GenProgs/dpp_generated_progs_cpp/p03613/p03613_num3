#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }
    
    int maxCount = 0;
    for (int X = 0; X < 100000; X++) {
        int count = 0;
        for (int i = 0; i < N; i++) {
            int diff = a[i] - X;
            if (diff < 0) {
                count += -diff;
            } else {
                count += diff;
            }
        }
        maxCount = std::max(maxCount, count);
    }
    
    std::cout << maxCount << std::endl;
    
    return 0;
}