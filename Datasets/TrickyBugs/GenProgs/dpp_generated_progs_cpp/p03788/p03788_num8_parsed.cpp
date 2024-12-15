#include <iostream>
#include <string>

int main() {
    int N, K;
    std::cin >> N >> K;
    std::string S;
    std::cin >> S;
    
    for (int i = 0; i < K; i++) {
        if (S[i % N] == 'A') {
            S[i % N] = (i % 2 == 0) ? 'B' : 'A';
        } else {
            S[i % N] = (i % 2 == 0) ? 'A' : 'B';
        }
    }
    
    std::cout << S;
    
    return 0;
}