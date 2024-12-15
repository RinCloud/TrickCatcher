#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define MOD 1000000007
using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    vector<int> c(N), w(N);
    unordered_map<int, int> colorCnt, weightCnt;
    
    for(int i = 0; i < N; i++) {
        cin >> c[i] >> w[i];
        colorCnt[c[i]]++;
        weightCnt[c[i]] += w[i];
    }
    
    vector<pair<int, int>> colorWeightCnt;
    for(auto it = colorCnt.begin(); it != colorCnt.end(); it++) {
        colorWeightCnt.push_back({ it->second, weightCnt[it->first] });
    }
    
    sort(colorWeightCnt.begin(), colorWeightCnt.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first;
    });
    
    vector<vector<long long>> dp(N+1, vector<long long>(X+1, 0));
    dp[0][0] = 1;
    
    for(int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for(int j = 1; j <= X; j++) {
            dp[i][j] = dp[i-1][j];
            if(j >= colorWeightCnt[i-1].second) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-colorWeightCnt[i-1].second]) % MOD;
            }
        }
    }
    
    vector<long long> prefixSum(N+2, 0);
    for(int i = 1; i <= N; i++) {
        prefixSum[i] = (prefixSum[i-1] + dp[i][X]) % MOD;
    }
    prefixSum[N+1] = prefixSum[N] % MOD;
    
    long long ans = 1;
    for(auto it = colorWeightCnt.begin(); it != colorWeightCnt.end(); it++) {
        int colorCnt = it->first;
        int weightSum = it->second;
        
        vector<long long> dp(N+1, 0);
        dp[0] = 1;
        
        for(int i = 0; i < colorCnt; i++) {
            for(int j = 1; j <= N; j++) {
                dp[j] = (dp[j-1] + prefixSum[j] - prefixSum[j-1] + MOD) % MOD;
                if(j >= weightSum) {
                    dp[j] = (dp[j] - (prefixSum[j] - prefixSum[j-weightSum]) + MOD) % MOD;
                }
            }
        }
        
        ans = (ans * dp[N]) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}