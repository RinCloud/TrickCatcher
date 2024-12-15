#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<bitset<4001>> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    bitset<4001> dp[2][4001];
    dp[0][0][0] = 1;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= X; j++) {
            dp[(i + 1) % 2][j] = dp[i % 2][j];
            
            int k = (j ^ A[i]).to_ulong();
            dp[(i + 1) % 2][k] |= dp[i % 2][j];
            dp[(i + 1) % 2][j] |= dp[i % 2][j] << 1;
        }
    }
    
    int ans = dp[N % 2][X].count() % MOD;
    cout << ans << endl;
    
    return 0;
}