#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,b) for(ll i=0;i<b;i++)

int main() {
    ll S = 0, n, Min = 100000000000;
    vector<ll> x(200000);
    cin >> n;
    rep(i, n) {
        cin >> x[i];
        S += x[i];
    }
    rep(i, n - 1) {
        Min = min(Min, abs(S -= 2 * x[i]));
    }
    cout << Min << endl;
}
