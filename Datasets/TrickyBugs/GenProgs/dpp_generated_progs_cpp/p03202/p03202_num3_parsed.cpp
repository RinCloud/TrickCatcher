#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for(int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::unordered_set<int> characters;

    int minCharacters = 1;
    for(int i = N-1; i >= 0; i--) {
        minCharacters = std::min(minCharacters+1, A[i]);
        characters.insert(minCharacters);
    }

    std::cout << characters.size() << std::endl;

    return 0;
}