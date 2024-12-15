#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int N, K;
    std::cin >> N >> K;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    std::unordered_set<int> s;
    std::vector<int> result;
    
    for (int i = 0; i < N * K; i++) {
        if (s.count(A[i % N]) == 0) {
            s.insert(A[i % N]);
            result.push_back(A[i % N]);
        } else {
            while (*(result.rbegin()) != A[i % N]) {
                s.erase(*(result.rbegin()));
                result.pop_back();
            }
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}