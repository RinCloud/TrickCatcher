#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    long long answer = -1e18;
    for (int start = 0; start < N; start++) {
        int current = start;
        long long score = 0;
        int count = 0;
        while (count < K && current != -1) {
            current = P[current] - 1;
            score += C[current];
            answer = max(answer, score);
            count++;
        }
    }

    cout << answer << endl;

    return 0;
}