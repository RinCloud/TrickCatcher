#include <iostream>
#include <string>

int main() {
    int N, K;
    std::string S;
    std::cin >> N >> K >> S;

    // Loop through K times
    for (int k = 0; k < K; ++k) {
        // Loop through each device
        for (int i = 0; i < N; ++i) {
            if (S[i] == 'A') {
                // Device in state A, throw ball from the same side and go into state B
                if (i > 0 && S[i-1] == 'R') {
                    S[i-1] = 'L';
                } else {
                    S[i+1] = 'R';
                }
                S[i] = 'B';
            } else if (S[i] == 'B') {
                // Device in state B, throw ball from the other side and go into state A
                if (i < N-1 && S[i+1] == 'L') {
                    S[i+1] = 'R';
                } else {
                    S[i-1] = 'L';
                }
                S[i] = 'A';
            }
        }
    }

    std::cout << S << std::endl;

    return 0;
}