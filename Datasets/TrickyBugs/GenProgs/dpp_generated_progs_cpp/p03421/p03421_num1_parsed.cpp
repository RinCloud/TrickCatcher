#include <iostream>
#include <vector>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    if (A + B > N + 1 || (A == 1 && B == 1 && N > 1)) {
        std::cout << -1 << std::endl;
        return 0;
    }

    std::vector<int> sequence;

    for (int i = 0; i < A; i++) {
        sequence.push_back(i + 1);
    }

    for (int i = B; i >= 1; i--) {
        sequence.push_back(A + i);
    }

    for (int i = A + B + 1; i <= N; i++) {
        sequence.push_back(i);
    }

    for (int i = 0; i < N; i++) {
        std::cout << sequence[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}