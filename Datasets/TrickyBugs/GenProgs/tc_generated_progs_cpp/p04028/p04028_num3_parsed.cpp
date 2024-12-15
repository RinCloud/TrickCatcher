#include <iostream>
#include <string>
#define llint long long
#define mod 1000000007

using namespace std;

llint N, M;
string s;
llint dp[5005][5005];

llint pow(llint a, llint n)
{
    if(n == 0) return 1;
    if(n % 2){
        return ((a%mod) * (pow(a, n-1)%mod)) % mod;
    }
    else{
        return pow((a*a)%mod, n/2) % mod;
    }
}

int main(void)
{
    cin >> N;
    cin >> s;
    M = s.size();
    
    dp[0][0] = 1;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j <= i; j++){ // Bug: changed N to i in loop condition
            dp[i][j] = 2*dp[i-1][j-1] + dp[i-1][j+1];
            if(j == 0) dp[i][j] += dp[i-1][j];
            dp[i][j] %= mod;
        }
    }
    
    llint ans = dp[N][M];
    ans *= pow(pow(2, M), mod-2);
    ans %= mod;
    cout << ans << endl;
    return 0;
}