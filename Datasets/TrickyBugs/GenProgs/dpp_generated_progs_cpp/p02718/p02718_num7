#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    int threshold = A[M-1] * 4 * M;
    int total_votes = 0;
    for (int i = 0; i < M; i++) {
        total_votes += A[i];
    }

    if (total_votes >= threshold) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}