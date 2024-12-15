#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateScore(vector<int>& A, vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
    int score = 0;
    int Q = a.size();

    for (int i = 0; i < Q; i++) {
        if (A[b[i]] - A[a[i]] == c[i]) {
            score += d[i];
        }
    }

    return score;
}

int findMaxScore(int N, int M, int Q, vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
    vector<int> A(N + 1); // 1-based indexing

    int maxScore = 0;

    function<void(int)> generateSequence = [&](int startIndex) {
        if (startIndex == N + 1) {
            int score = calculateScore(A, a, b, c, d);
            maxScore = max(maxScore, score);
            return;
        }

        for (int i = A[startIndex - 1]; i <= M; i++) {
            A[startIndex] = i;
            generateSequence(startIndex + 1);
        }
    };

    generateSequence(1);

    return maxScore;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> a(Q), b(Q), c(Q), d(Q);
    for (int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    int maxScore = findMaxScore(N, M, Q, a, b, c, d);
    cout << maxScore << endl;

    return 0;
}