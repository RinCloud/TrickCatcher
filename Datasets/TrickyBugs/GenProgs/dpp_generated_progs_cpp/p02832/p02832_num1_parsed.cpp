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
    
    std::vector<int> count(N, 0);
    for (int i = 0; i < N; i++) {
        if (a[i] - 1 >= N || count[a[i] - 1] != 0) {
            std::cout << -1 << std::endl;
            return 0;
        }
        count[a[i] - 1] = 1;
    }
    
    int missing = 0;
    int max_seen = 0;
    for (int i = 0; i < N; i++) {
        if (count[i] == 0) {
            missing++;
        } else {
            max_seen = std::max(max_seen, i + 1);
        }
        if (max_seen - missing >= i + 1) {
            std::cout << -1 << std::endl;
            return 0;
        }
    }
    
    std::cout << missing << std::endl;
    return 0;
}
