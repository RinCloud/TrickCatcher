#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const long long M = 998244353;
int main() {
    int N;
    string X;
    cin >> N >> X;
    vector<string> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int L = int(X.size());
    reverse(X.begin(), X.end());
    vector<int> cnt(L);
    int K = 0;
    for (int i = 0; i < N; i++) {
        reverse(A[i].begin(), A[i].end());
        int M = A[i].size();
        K = max(K, M);
        for (int j = 0; j < M; j++) {
            if (A[i][j] == '1') {
                cnt[j]++;
            }
        }
    }
    int Q = 0;
    for (int i = 0; i < L; i++) {
        if (X[i] == '1') {
            if (cnt[i] == 0) {
                cout << "0\n";
                return 0;
            }
        } else {
            Q += cnt[i];
        }
    }
    cout << (1LL << Q) % M << endl;
    return 0;
}