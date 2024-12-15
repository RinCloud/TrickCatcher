#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 50;
int n,k, a[N];



int main() {
    cin >> n  >> k ;
    for(int i=0;i<n;i++){
        int x;
         cin >> x;
         a[x]++;
    }
    int ans = 0;
    sort(a,a+n);
    reverse(a,a+n);
    for(int i=k;i<=n;i++) ans += a[i];
    cout << ans;



}
