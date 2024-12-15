#include <iostream>
#include <vector>
#include <string>

int main() {
    int N, Q;
    std::cin >> N >> Q;
    
    std::string S;
    std::cin >> S;
    
    std::vector<int> acCount(N, 0);
    
    for (int i = 1; i < N; i++) {
        acCount[i] = acCount[i-1] + (S[i-1] == 'A' && S[i] == 'C');
    }
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        std::cin >> l >> r;
        std::cout << acCount[r-1] - acCount[l-1] << std::endl;
    }
    
    return 0;
}