#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

const ll MOD = 1000000007;

struct Ball {
    int color;
    int weight;
};

ll modPow(ll x, ll power) {
    ll result = 1;
    while (power > 0) {
        if (power & 1) {
            result = (result * x) % MOD;
        }
        x = (x * x) % MOD;
        power >>= 1;
    }
    return result;
}

ll modInverse(ll x) {
    return modPow(x, MOD - 2);
}

ll countSequences(int N, int X, int Y, const vector<Ball>& balls) {
    vector<int> colorCounts(N + 1, 0);
    for (int i = 0; i < N; i++) {
        colorCounts[balls[i].color]++;
    }
    sort(colorCounts.begin() + 1, colorCounts.end());
    
    vector<ll> fact(N + 1, 1);
    vector<ll> invFact(N + 1, 1);
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = modInverse(fact[i]);
    }
    
    ll result = 0;
    vector<ll> dp(N + 1);
    dp[0] = 1;
    
    for (int i = 1; i <= N; i++) {
        int count = colorCounts[i];
        if (count == 0) {
            break;
        }
        vector<ll> newDp(N + 1);
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= count; k += 2) {
                for (int m = 0; m <= j && m <= k / 2; m++) {
                    ll term = (dp[j] * (((fact[count] * invFact[k]) % MOD * invFact[k - 2 * m]) % MOD * invFact[count - k]) % MOD) % MOD;
                    if (term != 0) {
                        newDp[j - m + count - k] = (newDp[j - m + count - k] + term) % MOD;
                    }
                }
            }
        }
        dp = move(newDp);
        for (int j = 1; j <= N; j++) {
            dp[j] = (dp[j] + dp[j - 1]) % MOD;
        }
        
        vector<ll> newDp2(N + 1);
        for (int j = 0; j <= N; j++) {
            for (int k = 1; k <= count; k += 2) {
                for (int m = 0; m <= j && m <= k / 2; m++) {
                    ll term = (dp[j] * (((fact[count] * invFact[k]) % MOD * invFact[k - 2 * m]) % MOD * invFact[count - k]) % MOD) % MOD;
                    if (term != 0) {
                        newDp2[j - m + count - k + 1] = (newDp2[j - m + count - k + 1] + term) % MOD;
                    }
                }
            }
        }
        dp = move(newDp2);
        for (int j = 1; j <= N; j++) {
            dp[j] = (dp[j] + dp[j - 1]) % MOD;
        }
        
        ll sum = 0;
        for (int j = 0; j <= N; j++) {
            sum = (sum + dp[j]) % MOD;
        }
        
        ll numWays = modPow(sum, balls.size());
        result = (result + numWays) % MOD;
    }
    
    return result;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    vector<Ball> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i].color >> balls[i].weight;
    }
    
    ll answer = countSequences(N, X, Y, balls);
    cout << answer << endl;
    
    return 0;
}