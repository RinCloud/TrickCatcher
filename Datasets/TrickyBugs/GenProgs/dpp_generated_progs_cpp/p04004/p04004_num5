#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    // Calculate the number of possible patterns leading to Alice's victory
    long long ans = 1;

    // For each card in Alice's deck, there are 3 possible choices (a, b, c)
    for (int i = 0; i < N; i++) {
        ans = (ans * 3) % MOD;
    }

    // For each card in Bob's deck, there are 3 possible choices (a, b, c)
    for (int i = 0; i < M; i++) {
        ans = (ans * 3) % MOD;
    }

    // For each card in Charlie's deck, there are 3 possible choices (a, b, c)
    for (int i = 0; i < K; i++) {
        ans = (ans * 3) % MOD;
    }

    // Print the answer modulo 1,000,000,007
    cout << ans << endl;

    return 0;
}