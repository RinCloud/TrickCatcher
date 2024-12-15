#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> votes(N);
    for (int i = 0; i < N; i++) {
        cin >> votes[i];
    }

    sort(votes.rbegin(), votes.rend());

    int totalVotes = 0;
    for (int i = 0; i < M; i++) {
        totalVotes += votes[i];
    }

    if (totalVotes >= votes[M - 1] * 4 * M) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}