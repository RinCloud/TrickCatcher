#include <iostream>

int main() {
    int L, R;
    std::cin >> L >> R;
    
    int min_mod = 2019;
    for (int i = L; i < R; i++) {
        for (int j = i + 1; j <= R; j++) {
            int mod = (i * j) % 2019;
            if (mod < min_mod) {
                min_mod = mod;
            }
        }
    }
    
    std::cout << min_mod << std::endl;
    
    return 0;
}