#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    if (A + B > N + 1 || A * B < N) {
        std::cout << -1 << std::endl;
        return 0;
    }

    std::vector<int> sequence(N);
    for (int i = 0; i < B; i++) {
        sequence[i] = i + 1;
    }

    int additional = A * B - N;
    int start = B;

    for (int i = 0; i < A; i++) {
        std::reverse(sequence.begin() + start, sequence.begin() + start + std::min(B, additional) + 1);
        start += std::min(B, additional) + 1;
        additional -= std::min(B, additional);
    }

    for (int i = 0; i < N; i++) {
        std::cout << sequence[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}