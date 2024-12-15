#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
	long i, j ,k;
	long n , m;
	cin >> n >> m;
	int x[n];
	rep(i, m) cin >> x[i];
	sort(x,x+m);
	rep(i, m-1){
		x[i] = abs(x[i+1] - x[i]);
	}
	sort(x, x+m-1);
	rep(i, m-n){
		j += x[i];
	}
	cout << j << endl;
}