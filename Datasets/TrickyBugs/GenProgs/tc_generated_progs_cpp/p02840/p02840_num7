#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int LL;

LL gcd(LL a,LL b)
{
	if(a<b)return gcd(b,a);
	if(b==0)return a;
	else return gcd(b,a%b);
}

LL sum(LL a,LL i, LL d)
{
	return a*i+d*i*(i-1)/2;
}

int main(){
	LL n,x,d;
	cin >> n >> x >> d;

	if(d==0) {
		if(x==0)
			cout << 1 << endl;
		else
			cout << n+1 << endl;
		return 0;
	}
	LL g = gcd(abs(x),abs(d));
	x=x/g,d=d/g;
	if(d<0)
		x=x+(n-1)*d, d=-d;
	LL ans=0;
	
	vector<vector<pair<LL,LL>>> v(d);
	for(LL i=0;i<=n;i++) {
		LL l=sum(x,i,d),r=sum(x+(n-i)*d,i,d);
		if(l>r)
			swap(l,r);
		v[i%d].push_back(make_pair(l,r));
	}
	
	for(LL i=0;i<=min(n,d-1);i++) {
		sort(v[i].begin(),v[i].end());
		LL MAX=-INF;
		for(auto p:v[i]) {
			LL l=p.first, r=p.second;
			l=max(l,MAX+d);
			ans+=max((r-l)/d+1,(LL)0);
			MAX=max(MAX,r);
		}
	}
	cout << ans << endl;
	return 0;
}