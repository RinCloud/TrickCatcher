#include <iostream>
#include <vector>
#include <unordered_map>
#define MOD 1000000007
using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < M; i++) {
        freq[A[i]]++;
    }

    int ans = 0;
    for (int i = 1; i <= K; i++) {
        unordered_map<int, int> cur_freq;
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            cur_freq[A[j]]++;
            if (cur_freq[A[j]] <= freq[A[j]]) {
                cnt++;
            }
            if (j >= K) {
                cur_freq[A[j - K]]--;
                if (cur_freq[A[j - K]] < freq[A[j - K]]) {
                    cnt--;
                }
            }
            if (cnt == M) {
                ans++;
            }
        }
    }

    cout << ans % MOD << endl;

    return 0;
}