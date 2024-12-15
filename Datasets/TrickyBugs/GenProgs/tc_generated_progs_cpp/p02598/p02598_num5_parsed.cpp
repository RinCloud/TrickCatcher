#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, k; cin>>n>>k;
    int a[n]; for(auto &i : a)  cin>>i;
    int lo = 0, hi = 1e9 +1, mid;
    
    while(hi-lo > 1) {
        int cnt = 0;
        mid = (lo+hi)>>1;
        for(int i = 0; i < n; i++)  cnt += (a[i] + mid - 1)/mid - 1;
        if(cnt<=k)  hi = mid;
        else    lo = mid;
    }
    cout<<hi;
}
