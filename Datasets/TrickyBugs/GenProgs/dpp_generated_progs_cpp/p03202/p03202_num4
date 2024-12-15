#include <iostream>
#include <vector>
#include <set>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::set<int> uniqueChars;
    for (int i = 0; i < N; i++) {
        uniqueChars.insert(A[i]);
    }

    std::cout << uniqueChars.size() << std::endl;
    
    return 0;
}