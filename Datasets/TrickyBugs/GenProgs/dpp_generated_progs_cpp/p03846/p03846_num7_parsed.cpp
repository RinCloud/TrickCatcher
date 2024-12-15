#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> L(N);
    vector<int> R(N);
    
    for (int i = 0; i < N; i++) {
        L[i] = i - A[i];
        R[i] = i + A[i];
    }
    
    int leftmost = 0;
    int rightmost = 0;
    
    for (int i = 0; i < N; i++) {
        if (L[i] < 0) {
            leftmost++;
        }
        if (R[i] >= N) {
            rightmost++;
        }
    }
    
    if (leftmost > 1 || rightmost > 1) {
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> cnt(N);
    for (int i = 0; i < N; i++) {
        cnt[R[i]]++;
    }
    
    int ans = 1;
    int sum = 0;
    
    for (int i = 0; i < N; i++) {
        ans = (ans * max(0, cnt[i] - sum)) % MOD;
        sum += cnt[i];
    }
    
    cout << ans << endl;
    
    return 0;
}