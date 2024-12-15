#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    vector<int> zeroCount(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        zeroCount[i] = zeroCount[i - 1] + (S[i - 1] == '0');
    }

    int maxConsecutiveHands = 0;
    for (int i = 0; i <= K; i++) {
        int consecutiveHands = zeroCount[i] + (zeroCount[N] - zeroCount[N - i]);
        maxConsecutiveHands = max(maxConsecutiveHands, consecutiveHands);
    }

    cout << maxConsecutiveHands << endl;

    return 0;
}