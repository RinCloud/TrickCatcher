#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> broken_steps(M);
    for (int i = 0; i < M; i++) {
        cin >> broken_steps[i];
    }

    vector<int> ways(N + 1, 0);
    ways[0] = 1;

    for (int i = 1; i <= N; i++) {
        if (find(broken_steps.begin(), broken_steps.end(), i) != broken_steps.end()) {
            continue; // Skip broken steps
        }

        if (i >= 1) {
            ways[i] = (ways[i] + ways[i - 1]) % MOD;
        }
        if (i >= 2) {
            ways[i] = (ways[i] + ways[i - 2]) % MOD;
        }
    }

    cout << ways[N] << endl;

    return 0;
}