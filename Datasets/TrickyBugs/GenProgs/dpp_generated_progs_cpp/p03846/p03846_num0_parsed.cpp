#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int cnt_odd = 0, cnt_even = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            cnt_odd += A[i] / 2;
            cnt_even += (A[i] + 1) / 2;
        } else {
            cnt_odd += (A[i] + 1) / 2;
            cnt_even += A[i] / 2;
        }
    }
    
    if (cnt_odd != cnt_even) {
        cout << 0 << endl;
        return 0;
    }
    
    vector<ll> factorial(N + 1);
    factorial[0] = 1;
    for (int i = 1; i <= N; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    
    ll res = 1;
    for (int i = 0; i < N; i++) {
        res = (res * factorial[A[i]]) % MOD;
    }
    
    ll ans = (factorial[N] * res) % MOD;
    cout << ans << endl;
    
    return 0;
}