#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int N, M;
vector<int> A;

int solve() {
    int cnt = 0;

    // Generate all possible permutations of player order
    vector<int> players;
    for (int i = 1; i <= (1 << N); i++) {
        players.push_back(i);
    }

    do {
        // Check if Player 1 wins the tournament
        int winner = 1;
        for (int i = 0; i < (1 << N) - 1; i += 2) {
            if (find(A.begin(), A.end(), players[i + 1]) != A.end()) {
                winner = players[i + 1];
            }
        }

        if (winner == 1) {
            cnt++;
            cnt %= MOD;
        }
    } while (next_permutation(players.begin(), players.end()));

    return cnt;
}

int main() {
    cin >> N >> M;
    A.resize(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << solve() << endl;

    return 0;
}