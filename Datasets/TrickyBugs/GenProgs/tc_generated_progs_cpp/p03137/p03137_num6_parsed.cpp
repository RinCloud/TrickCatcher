#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int x[1000100];
int y[1000100];

int main(){
    long i, j ,k;
    long n , m;
    cin >> n >> m;
    rep(i, m) cin >> x[i];
    sort(x,x+m);
    j = 0; // Setting initial value of j to 0
    rep(i, m-1){
        y[i] = abs(x[i+1] - x[i]);
    }
    sort(y, y+m-1);
    rep(i, m-n){
        j += y[i];
    }
    cout << j << endl;
}