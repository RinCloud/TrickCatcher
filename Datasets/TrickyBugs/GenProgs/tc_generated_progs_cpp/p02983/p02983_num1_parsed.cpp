#include <bits/stdc++.h>
using namespace std;

int main(){
    long long def, l, r, t, ans=2019;
    cin >> l >> r;
    def = (r-l) % 2020;
    l %= 2019;
    r = l + def;

    for(long long i = l; i <= r-1; i++){
        for(long long j = i+1; j <= r; j++){
            ans = min(ans, (i * j) % 2019);
        }
    }
    cout << ans;
}
