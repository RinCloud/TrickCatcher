#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<int> A(H), B(H);
    for (int i = 0; i < H; i++) {
        cin >> A[i] >> B[i];
    }
    
    vector<int> dp(W, H);
    for (int i = 0; i < H; i++) {
        dp[A[i]-1] = i;
    }
    
    int answer = dp[0];
    for (int j = 1; j < W; j++) {
        answer = min(answer, dp[j]);
        dp[j] = answer;
        if (j >= B[dp[j]]) {
            dp[j] = H;
        }
    }
    
    for (int i = 0; i < H; i++) {
        if (dp[W-1] == i) {
            cout << W-1 << endl;
        } else if (dp[W-1] < i) {
            cout << -1 << endl;
        } else {
            cout << dp[W-1] + i << endl;
        }
    }
    
    return 0;
}