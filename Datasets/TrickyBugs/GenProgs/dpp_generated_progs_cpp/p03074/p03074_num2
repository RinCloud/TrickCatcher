#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> handsCount(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        handsCount[i + 1] = handsCount[i] + (S[i] == '1');
    }

    int maxHands = -1;
    for (int i = 0; i <= K; ++i) {
        int hands = handsCount[i] + handsCount[N] - handsCount[N - K + i];
        maxHands = max(maxHands, hands);
    }

    cout << maxHands << endl;

    return 0;
}