#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
    long i, j ,k;
    long n , m;
    cin >> n >> m;
    long x[m];
    rep(i, m) cin >> x[i];
    sort(x,x+m);
    long y[m-1]={0};
    rep(i, m-1){
        y[i] = abs(x[i+1] - x[i]);
    }
    sort(y, y+m-1);
    long j=0;
    rep(i, m-n){
        j += y[i];
    }
    cout << j << endl;
}