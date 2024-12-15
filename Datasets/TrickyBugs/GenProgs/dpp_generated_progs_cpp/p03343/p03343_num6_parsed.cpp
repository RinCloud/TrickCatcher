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

    int ans = INT_MAX;
    for (int i = 0; i < N; i++) {
        int removed = A[i];
        vector<int> subseq;
        for (int j = 0; j < N; j++) {
            if (A[j] < removed) {
                subseq.push_back(A[j]);
                if (subseq.size() == K) {
                    break;
                }
            }
        }
        if (subseq.size() >= K - 1) {
            sort(subseq.begin(), subseq.end());
            ans = min(ans, subseq[subseq.size() - (K - 1)]);
        }
    }
    
    cout << ans << endl;

    return 0;
}

