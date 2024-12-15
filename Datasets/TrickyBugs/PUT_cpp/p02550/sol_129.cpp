#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1e5+5;
const int INF=0x3f3f3f3f;
int flag[N];
LL Cnt[N];
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	LL n,x,mod;
	cin>>n>>x>>mod;
	for(int i=1; i<=n; ++i) {
		int tmp=x%mod;
		Cnt[i]=Cnt[i-1]+tmp;
		if(flag[tmp]) {
			int &pos=flag[tmp],len=i-pos;
			cout<<Cnt[pos]
				  +(n-pos)/len*(Cnt[i]-Cnt[pos])
			      +Cnt[(n-pos)%len+pos]-Cnt[pos];
			return 0;
		}
		flag[tmp]=i;
		x=x*x%mod;
	}
	cout<<Cnt[n]<<endl;
	return 0;
}
