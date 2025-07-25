#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<set>
#include<bitset>
#include<map>

#define fo(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)

using namespace std;

typedef long long LL;
typedef double db;

const int N = 2e+5+5;

int n,m;
int pre[N],suf[N];
int pc[N],sc[N];
int pv[N];

int main(){
	cin >> n >> m;
	fo(i,1,n){
		int l,r;
		cin >> l >> r;
		pre[l]++,pre[r]++;
		suf[l]++,suf[r]++;
		pc[r]++,sc[l]++;
	}
	pv[0]=pre[0]-pc[0];
	fo(i,1,m){
		pre[i]+=pre[i-1];
		pc[i]+=pc[i-1];
		pv[i]=max(pv[i-1],pre[i]-i-pc[i]);
	}
	int ans=suf[m+1]+pv[m];
	fd(i,m,1){
		suf[i]+=suf[i+1];
		sc[i]+=sc[i+1];
		ans=max(ans,pv[i-1]+suf[i]-sc[i]-(m-i+1));
	}
	ans-=n;
	ans=max(ans,n-m);
	ans=max(ans,0);
	cout << ans << endl;
	return 0;
}
