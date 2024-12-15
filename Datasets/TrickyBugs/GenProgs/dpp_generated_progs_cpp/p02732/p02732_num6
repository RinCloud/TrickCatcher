#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    std::unordered_map<int, int> count;
    for (int i = 0; i < N; i++) {
        count[A[i]]++;
    }
    
    for (int i = 0; i < N; i++) {
        int ans = N - 1;
        ans -= count[A[i]] - 1;
        std::cout << ans << std::endl;
    }
    
    return 0;
}