#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<vector<long long>> dp(N + 1, vector<long long>(2, 0));
    dp[0][0] = 1;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][(j + A[i]) % 2] += dp[i][j];
        }
    }
    
    cout << dp[N][P] << endl;
    
    return 0;
}