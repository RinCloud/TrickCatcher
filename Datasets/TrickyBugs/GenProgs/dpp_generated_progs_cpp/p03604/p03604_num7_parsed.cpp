#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> X(2 * N), Y(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> X[i] >> Y[i];
    }
    
    vector<int> fact(2 * N + 1, 1);
    for (int i = 1; i <= 2 * N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    
    long long ans = fact[2 * N];
    
    int cntX = 1, cntY = 1;
    for (int i = 1; i < 2 * N; i++) {
        if (X[i] == X[i - 1]) {
            cntX++;
        } else {
            ans = (ans * fact[cntX]) % MOD;
            cntX = 1;
        }
        
        if (Y[i] == Y[i - 1]) {
            cntY++;
        } else {
            ans = (ans * fact[cntY]) % MOD;
            cntY = 1;
        }
    }
    
    ans = (ans * fact[cntX]) % MOD;
    ans = (ans * fact[cntY]) % MOD;
    
    cout << ans << endl;
    
    return 0;
}