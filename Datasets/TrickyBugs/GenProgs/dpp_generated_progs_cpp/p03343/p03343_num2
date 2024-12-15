#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int min_diff = INT_MAX;
    for (int i = 0; i <= N - Q; i++) {
        vector<int> subsequence(A.begin() + i, A.begin() + i + K);
        sort(subsequence.begin(), subsequence.end());

        int diff = subsequence[K - 1] - subsequence[0];
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;

    return 0;
}