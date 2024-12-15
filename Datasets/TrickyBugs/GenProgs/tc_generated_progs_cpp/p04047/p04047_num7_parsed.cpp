#include <bits/stdc++.h>
using namespace std;

int a[110], n;

int main() {
    cin >> n; 
    n*=2;
    for (int i=1; i<=n; i++) 
        cin>> a[i];
    sort(a+1,a+n+1);
    int ans=0;
    for (int i=n-1; i>0; i-=2) 
        ans+=a[i];
    cout << ans;
    return 0;
}
