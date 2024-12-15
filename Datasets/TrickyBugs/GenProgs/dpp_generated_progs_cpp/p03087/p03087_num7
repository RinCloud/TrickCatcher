#include <iostream>
#include <string>
#include <vector>

int main() {
    int N, Q;
    std::cin >> N >> Q;
    std::string S;
    std::cin >> S;
    
    // Calculate the prefix sum of occurrences of "AC"
    std::vector<int> prefix_sum(N);
    for (int i = 1; i < N; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + (S[i - 1] == 'A' && S[i] == 'C' ? 1 : 0);
    }
    
    // Process each query
    for (int i = 0; i < Q; ++i) {
        int l, r;
        std::cin >> l >> r;
        
        // Calculate the number of occurrences of "AC" in the given substring
        int count = prefix_sum[r - 2] - prefix_sum[l - 2];
        
        std::cout << count << std::endl;
    }
    
    return 0;
}