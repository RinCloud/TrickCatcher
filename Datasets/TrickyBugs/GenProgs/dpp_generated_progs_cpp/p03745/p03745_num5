#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int subarrays = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] != A[i-1]) {
            subarrays++;
        }
    }

    std::cout << subarrays << std::endl;

    return 0;
}