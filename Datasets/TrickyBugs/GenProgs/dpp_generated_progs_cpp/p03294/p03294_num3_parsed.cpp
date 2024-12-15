#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }
    
    int max_f = 0;
    for (int m = 0; m < 100000; m++) {
        int f = 0;
        for (int i = 0; i < N; i++) {
            f += m % a[i];
        }
        max_f = std::max(max_f, f);
    }
    
    std::cout << max_f << std::endl;
    
    return 0;
}