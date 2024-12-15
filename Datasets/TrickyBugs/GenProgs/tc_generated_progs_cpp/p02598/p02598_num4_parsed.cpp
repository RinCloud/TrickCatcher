#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, k; cin>>n>>k;
    int a[n]; for(auto &i : a)  cin>>i;
    int lo = 1, hi = *max_element(a, a+n), mid, res;
    
    while(lo<=hi) {
        int cnt = 0;
        mid = lo + (hi - lo)/2;
        for(int i = 0; i < n; i++) {
            cnt += (a[i]+mid-1)/mid - 1;
        }
        if(cnt <= k) {
            res = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout<<res;
}