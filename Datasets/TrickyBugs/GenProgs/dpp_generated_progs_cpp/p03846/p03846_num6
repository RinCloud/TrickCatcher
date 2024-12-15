#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    vector<int> cnt(N);
    for (int i = 0; i < N; ++i) {
        cnt[A[i]]++;
    }
    
    if (A[0] != 0 || cnt[0] != 1) {
        cout << 0 << endl;
        return 0;
    }
    
    long long ans = 1;
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < cnt[i]; ++j) {
            ans = ans * (cnt[i - 1] - j) % MOD;
        }
        if (cnt[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}