#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int operations = 0;
    bool allEven = true;
    while (allEven) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
            A[i] /= 2;
        }
        if (allEven) {
            operations++;
        }
    }

    std::cout << operations << std::endl;

    return 0;
}
