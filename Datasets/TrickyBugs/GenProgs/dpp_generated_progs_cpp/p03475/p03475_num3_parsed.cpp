#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> C(N - 1), S(N - 1), F(N - 1);
    for (int i = 0; i < N - 1; i++) {
        std::cin >> C[i] >> S[i] >> F[i];
    }

    std::vector<int> ans(N);
    for (int i = 0; i < N - 1; i++) {
        int t = S[i]; // time when the train departs from station i
        for (int j = i; j < N - 1; j++) {
            if (t < S[j]) {
                t = S[j]; // wait for the next train to depart if necessary
            } else if (t % F[j] != 0) {
                t += F[j] - (t % F[j]); // wait for the next train to depart if necessary
            }
            t += C[j]; // travel to the next station
        }
        ans[i] = t;
    }

    for (int i = 0; i < N; i++) {
        std::cout << ans[i] << std::endl;
    }

    return 0;
}