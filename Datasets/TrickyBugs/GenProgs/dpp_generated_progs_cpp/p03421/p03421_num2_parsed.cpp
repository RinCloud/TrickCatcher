#include <iostream>
#include <vector>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    if (A + B > N + 1 || A * B < N) {
        std::cout << -1 << std::endl;
        return 0;
    }

    std::vector<int> sequence;

    int x = N - B + 1;
    for (int i = 0; i < A; i++) {
        sequence.push_back(x + i);
    }

    int y = N;

    for (int i = 0; i < B; i++) {
        sequence.push_back(y - i);
    }

    for (int i = 1; i <= N - A - B; i++) {
        sequence.push_back(x + A - 1);
    }

    for (int i = 0; i < N; i++) {
        std::cout << sequence[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
