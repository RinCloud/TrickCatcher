#include <iostream>
#include <string>
#include <vector>

int main() {
    int N, Q;
    std::cin >> N >> Q;
    
    std::string S;
    std::cin >> S;
    
    std::vector<int> prefixCount(N+1, 0);
    
    for (int i = 1; i <= N; i++) {
        if (S[i-1] == 'A' && S[i] == 'C') {
            prefixCount[i] = prefixCount[i-1] + 1;
        } else {
            prefixCount[i] = prefixCount[i-1];
        }
    }
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        std::cin >> l >> r;
        
        int count = prefixCount[r-1] - prefixCount[l-1];
        std::cout << count << std::endl;
    }
    
    return 0;
}