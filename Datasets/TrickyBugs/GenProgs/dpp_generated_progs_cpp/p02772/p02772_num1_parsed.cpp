#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    bool approved = true;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0 && (A[i] % 3 != 0 && A[i] % 5 != 0)) {
            approved = false;
            break;
        }
    }

    if (approved) {
        std::cout << "APPROVED" << std::endl;
    } else {
        std::cout << "DENIED" << std::endl;
    }

    return 0;
}
