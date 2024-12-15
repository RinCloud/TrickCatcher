#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long int power(long long int a, long long int b)
{
    long long int res = 1;
    while(b)
    {
        if(b % 2)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}

int main()
{
    int N, K, M;
    cin>>N>>K>>M;
    vector<int> A(M);
    for(int i = 0; i < M; i++)
        cin>>A[i];
    
    if(K == 1)
    {
        cout<<1<<endl;
        return 0;
    }
    
    vector<vector<long long int>> dp(N+1, vector<long long int>(K+1, 0));
    vector<long long int> prefix_sum(N+1, 0);
    
    dp[0][0] = 1;
    for(int i = 1; i <= N; i++)
    {
        prefix_sum[i] = (prefix_sum[i-1] + dp[i-1][K]) % MOD;
        for(int j = 1; j <= K; j++)
            dp[i][j] = (dp[i][j-1] + prefix_sum[i-1] - prefix_sum[max(0, i - j)]) % MOD;
    }
    
    vector<int> last_occurrence(K+1, -1);
    long long int ans = 0;
    for(int i = M-1; i < N; i++)
    {
        long long int cnt = 1;
        for(int j = M-1; j >= 0; j--)
        {
            int num = A[j];
            if(last_occurrence[num] != -1 && last_occurrence[num] < j)
                cnt = (cnt * dp[i - last_occurrence[num] - 1][1]) % MOD;
            else
                cnt = (cnt * (dp[i - j][1] - dp[i - j - 1][1] + MOD) % MOD) % MOD;
            last_occurrence[num] = i;
        }
        ans = (ans + cnt) % MOD;
    }
    
    cout<<ans<<endl;
    return 0;
}