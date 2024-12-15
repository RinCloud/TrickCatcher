#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, Q;
vector<int> A;
vector<int> a, b, c, d;

int score(const vector<int>& A) {
    int score = 0;
    for (int i = 0; i < Q; i++) {
        if (A[b[i] - 1] - A[a[i] - 1] == c[i]) {
            score += d[i];
        }
    }
    return score;
}

int maximizeScore(vector<int>& A, int index) {
    int result = 0;
    if (index == N) {
        return score(A);
    }
    int start = (index == 1) ? 1 : A[index - 1];
    for (int i = start; i <= M; i++) {
        A[index] = i;
        result = max(result, maximizeScore(A, index + 1));
    }
    return result;
}

int main() {
    cin >> N >> M >> Q;
    A.resize(N);
    a.resize(Q);
    b.resize(Q);
    c.resize(Q);
    d.resize(Q);

    for (int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    cout << maximizeScore(A, 0) << endl;

    return 0;
}