#include <iostream>
#include <unordered_map>
#define ll long long
using namespace std;

unordered_map<ll, ll> f;
ll t,n,a,b,c,d;

ll mn(ll x, ll y) {
    return x < y ? x : y;
}

ll dfs(ll x) {
    if(f.count(x)) return f[x];
    f[x] = 1e18;
    if(x <= 2e9) f[x] = mn(f[x], x * d);
    if(!(x % 2)) f[x] = mn(f[x], dfs(x / 2) + a);
    if(!(x % 3)) f[x] = mn(f[x], dfs(x / 3) + b);
    if(!(x % 5)) f[x] = mn(f[x], dfs(x / 5) + c);
    if(x % 2) f[x] = mn(f[x], dfs(x - 1) + d);
    if(x % 3) f[x] = mn(f[x], dfs(x - x % 3) + (x % 3) * d);
    if(x % 5) f[x] = mn(f[x], dfs(x - x % 5) + (x % 5) * d);
    if(x % 2) f[x] = mn(f[x], dfs(x + 1) + d);
    if(x % 3) f[x] = mn(f[x], dfs(x - x % 3 + 3) + (3 - x % 3) * d);
    if(x % 5) f[x] = mn(f[x], dfs(x - x % 5 + 5) + (5 - x % 5) * d);
    return f[x];
}

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> a >> b >> c >> d;
        f.clear();
        f[0] = 0;
        cout << dfs(n) << endl;
    }
    return 0;
}
