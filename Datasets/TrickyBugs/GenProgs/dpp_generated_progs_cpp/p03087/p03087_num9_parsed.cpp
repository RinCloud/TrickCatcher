#include <iostream>
#include <string>
#include <vector>

int main() {
    int N, Q;
    std::cin >> N >> Q;
    
    std::string S;
    std::cin >> S;
    
    // Calculate prefix sum of occurrences of "AC"
    std::vector<int> prefix_sum(N+1, 0);
    for (int i = 1; i <= N; i++) {
        prefix_sum[i] = prefix_sum[i-1] + (S.substr(i-1, 2) == "AC" ? 1 : 0);
    }
    
    // Answer queries
    for (int i = 0; i < Q; i++) {
        int l, r;
        std::cin >> l >> r;
        
        // Number of occurrences of "AC" in the substring from index l to r
        int num_occurrences = prefix_sum[r-1] - prefix_sum[l-1];
        
        std::cout << num_occurrences << std::endl;
    }
    
    return 0;
}