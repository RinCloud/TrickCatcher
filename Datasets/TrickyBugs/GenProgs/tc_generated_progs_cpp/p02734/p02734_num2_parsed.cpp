#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, S;
    cin >> N >> S;
    const int MOD = 998244353;

    vector<long long> d(S + 1);
    vector<long long> dp(S + 1);

    long long ans = 0;

    for(int i = 0; i < N; i++){
        int a;
        cin >> a;

        d = dp;

        dp[0]++;
        for(int j = 1; j <= S; j++){
            dp[j] = (dp[j] + d[j - 1]) % MOD;
            if(j == a) dp[j] = (dp[j] + 1) % MOD;

            ans = (ans + dp[j]) % MOD;
        }
    }

    cout << ans << endl;
}
