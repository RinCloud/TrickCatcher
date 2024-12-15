#include <iostream>
#include <vector>

const int P = 200003;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += ((A[i] % P) * (A[j] % P)) % P;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
