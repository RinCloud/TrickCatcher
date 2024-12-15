#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    vector<int> dp(H + 1, INT_MAX);
    dp[0] = 0;
    
    for (int i = 1; i <= H; i++) {
        for (int j = 0; j < N; j++) {
            if (i - A[j] >= 0) {
                dp[i] = min(dp[i], dp[i - A[j]] + B[j]);
            }
        }
    }
    
    cout << dp[H] << endl;

    return 0;
}