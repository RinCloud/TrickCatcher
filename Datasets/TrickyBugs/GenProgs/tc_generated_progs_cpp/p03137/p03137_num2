#include<bits/stdc++.h>
using namespace std;
 
#define rep(i,n) for(i=0;i<n;i++)

int main(){
    long i, j = 0;
    long n , m;
    cin >> n >> m;
    long x[m];
    rep(i, m) cin >> x[i];
    sort(x,x+m);
    long y[m-1];
    rep(i, m-1){
        y[i] = abs(x[i+1] - x[i]);
    }
    sort(y, y+m-1);
    rep(i, m-n){
        j += y[i];
    }
    cout << j << endl;
    return 0;
}