#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,b) for(ll i=0;i<b;i++)

int main() {
    ll S = 0, n, Min = INT_MAX;
    cin >> n;
    vector<ll> x(n);
    rep(i, n) {
        cin >> x[i];
        S += x[i];
    }
    rep(i, n) {
        Min = min(Min, abs(S - 2 * x[i]));
    }
    cout << Min << endl;
}
