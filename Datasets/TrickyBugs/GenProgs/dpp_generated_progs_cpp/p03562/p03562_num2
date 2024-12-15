#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
const int MOD = 998244353;
 
vector<long long> solve(vector<long long>& a, long long x) {
    int n = a.size();
    
    vector<long long> cnt(1LL<<n, 0);
    for (int s = 1; s < 1LL<<n; s++) {
        vector<int> idx;
        for (int i = 0; i < n; i++) {
            if (s>>i&1) {
                idx.push_back(i);
            }
        }
        
        long long val = 0;
        for (int i : idx) {
            val |= a[i];
        }
        
        cnt[s] = val;
    }
    
    vector<long long> dp(1LL<<n, 0);
    dp[0] = 1;
    for (int s = 1; s < 1LL<<n; s++) {
        for (int t = s; t; t = (t-1)&s)
            dp[s] = (dp[s] + dp[s^t] * cnt[t]) % MOD;
    }
    
    vector<long long> res;
    for (int s = 1; s < 1LL<<n; s++) {
        long long val = 0;
        for (int i = 0; i < n; i++) {
            if (s>>i&1) {
                val |= a[i];
            }
        }
        
        if (val <= x) {
            res.push_back(dp[s]);
        }
    }
    
    return res;
}
 
int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<long long> res = solve(a, x);
    
    long long ans = 0;
    for (long long v : res) {
        ans = (ans + v) % MOD;
    }
    
    cout << ans << endl;
 
    return 0;
}