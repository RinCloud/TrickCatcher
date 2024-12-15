#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int binomialCoeff(int n, int k) {
    vector<vector<int>> C(n + 1, vector<int>(k + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
        }
    }

    return C[n][k];
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    int numValues = binomialCoeff(N + M - 1, K - 1);

    cout << numValues << endl;

    return 0;
}