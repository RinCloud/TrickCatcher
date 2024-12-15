#include <iostream>
#include <string>
#define MOD 998244353
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.size();
    
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        if (S[i] != S[(i + 1) % n]) {
            ans = (ans * 2) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
