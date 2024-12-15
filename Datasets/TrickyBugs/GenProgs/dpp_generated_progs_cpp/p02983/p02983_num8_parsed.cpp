#include <iostream>

int main() {
    int L, R;
    std::cin >> L >> R;
    
    // Find the minimum possible value of (i * j) % 2019
    // when i and j are chosen such that L <= i < j <= R
    
    int minMod = INT_MAX;
    for (int i = L; i < R; i++) {
        for (int j = i + 1; j <= R; j++) {
            int mod = (i * j) % 2019;
            if (mod < minMod) {
                minMod = mod;
            }
        }
    }
    
    std::cout << minMod << std::endl;
    
    return 0;
}