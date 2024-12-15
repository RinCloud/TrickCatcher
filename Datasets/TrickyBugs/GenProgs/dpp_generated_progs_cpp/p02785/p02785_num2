#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;
    
    std::vector<int> H(N);
    for (int i = 0; i < N; i++) {
        std::cin >> H[i];
    }
    
    std::sort(H.begin(), H.end(), std::greater<int>());
    
    long long int attacks = 0;
    for (int i = K; i < N; i++) {
        attacks += H[i];
    }
    
    std::cout << attacks << std::endl;
    
    return 0;
}