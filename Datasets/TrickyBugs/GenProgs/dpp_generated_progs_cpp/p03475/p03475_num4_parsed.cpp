#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> C(N-1);
    std::vector<int> S(N-1);
    std::vector<int> F(N-1);
    for (int i = 0; i < N-1; i++) {
        std::cin >> C[i] >> S[i] >> F[i];
    }

    std::vector<int> times(N);
    for (int i = 0; i < N-1; i++) {
        times[i] = S[i] + C[i];
        for (int j = i-1; j >= 0; j--) {
            if (times[j] % F[j] != 0) {
                int wait_time = F[j] - (times[j] % F[j]);
                times[j] += wait_time;
            }
            times[j] += C[j];
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << times[i] << std::endl;
    }

    return 0;
}