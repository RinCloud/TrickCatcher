#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    long long maxArea = 0;
    for (int i = N - 1; i >= 3; i--) {
        if (A[i] == A[i-1]) {
            maxArea = std::max(maxArea, (long long)A[i] * A[i-2]);
            i -= 2;
        }
    }

    std::cout << maxArea << std::endl;

    return 0;
}