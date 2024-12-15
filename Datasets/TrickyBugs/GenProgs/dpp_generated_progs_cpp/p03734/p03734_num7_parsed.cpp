#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    
    vector<int> w(N), v(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }
    
    vector<long long> dp(W + 1, 0);
    for (int i = 0; i < N; i++) {
        for (int j = W; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    
    cout << dp[W] << endl;
    
    return 0;
}