#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::unordered_set<int> s;
    for (int i = 0; i < N * K; i++) {
        if (s.find(A[i % N]) != s.end()) {
            while (*s.rbegin() != A[i % N]) {
                s.erase(*s.rbegin());
            }
            s.erase(*s.rbegin());
        } else {
            s.insert(A[i % N]);
        }
    }

    for (int elem : s) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
