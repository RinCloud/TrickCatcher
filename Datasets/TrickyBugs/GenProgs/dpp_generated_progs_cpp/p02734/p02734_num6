#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int N, S;
    std::cin >> N >> S;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::vector<std::vector<int>> f(N + 1, std::vector<int>(S + 1));
    f[0][0] = 1;
    
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= S; ++j) {
            f[i][j] = f[i-1][j];
            if (j >= A[i-1]) {
                (f[i][j] += f[i-1][j - A[i-1]]) %= MOD;
            }
        }
    }
    
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; ++j) {
            (sum += f[j][S]) %= MOD;
        }
    }
    
    std::cout << sum << std::endl;

    return 0;
}