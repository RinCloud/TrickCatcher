#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    int totalVotes = 0;
    for (int i = 0; i < M; i++) {
        totalVotes += A[i];
    }

    double threshold = totalVotes / (4.0 * M);

    if (A[M-1] >= threshold) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}