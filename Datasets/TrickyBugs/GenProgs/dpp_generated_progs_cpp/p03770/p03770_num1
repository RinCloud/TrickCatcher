#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define MOD 1000000007

using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    vector<int> c(N), w(N);
    for (int i = 0; i < N; i++) {
        cin >> c[i] >> w[i];
    }
    
    vector<int> colorCount(N+1, 0);
    vector<long long> weightSum(N+1, 0);
    for (int i = 0; i < N; i++) {
        colorCount[c[i]]++;
        weightSum[c[i]] += w[i];
    }
    
    map<pair<int, int>, long long> dp;
    dp[make_pair(0, 0)] = 1;
    
    for (int i = 1; i <= N; i++) {
        vector<long long> tempWeightSum = weightSum;
        vector<long long> suffixSum(N+1, 0);
        for (int j = N; j >= 1; j--) {
            suffixSum[j-1] = suffixSum[j]+tempWeightSum[j];
        }
        
        for (int j = 0; j <= X; j++) {
            for (int k = 0; k <= Y; k++) {
                int rem = colorCount[i]-j-k;
                
                if (rem >= 0) {
                    pair<int, int> state;
                    state.first = j+suffixSum[j];
                    state.second = k+suffixSum[k];
                    
                    if (dp.count(state) > 0) {
                        long long val = dp[state];
                        if (j < X && j+1 <= colorCount[i]) {
                            pair<int, int> newState;
                            newState.first = j+1;
                            newState.second = k;
                            dp[newState] += val;
                            dp[newState] %= MOD;
                        }
                        if (k < Y && k+1 <= colorCount[i]) {
                            pair<int, int> newState;
                            newState.first = j;
                            newState.second = k+1;
                            dp[newState] += val;
                            dp[newState] %= MOD;
                        }
                    }
                }
            }
        }
        
        for (int j = N; j >= 1; j--) {
            tempWeightSum[j-1] += tempWeightSum[j]*colorCount[i];
        }
    }
    
    long long ans = 0;
    for (auto it = dp.begin(); it != dp.end(); it++) {
        ans += it->second;
        ans %= MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}