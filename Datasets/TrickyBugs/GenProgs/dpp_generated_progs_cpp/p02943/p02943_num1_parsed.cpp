#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int N, K;
    std::string S;
    std::cin >> N >> K >> S;

    std::string T = S;
    std::reverse(T.begin(), T.end());
    std::string U = S + T;
    
    std::string lexicographically_smallest = U;
    for (int i = 0; i < K; i++) {
        std::string S_prime = U.substr(0, N);
        lexicographically_smallest = std::min(lexicographically_smallest, S_prime);
        U = U.substr(1) + U[0];
    }

    std::cout << lexicographically_smallest << std::endl;

    return 0;
}