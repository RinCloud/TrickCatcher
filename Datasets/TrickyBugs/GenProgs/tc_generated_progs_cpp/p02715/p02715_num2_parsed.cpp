#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
const int MAXN=1e5+5;

ll n,k;
ll ans[MAXN],sum;

ll qpow(int a, int b) {
	ll ans = 1, base = a;
	while (b) {
		if (b & 1) ans = ans * base % MOD;
		b >>= 1, base = base * base % MOD;
	}
	return ans;
}

int main() {
	cin>>n>>k;
	for(int x=k; x>=1; x--) {
		ans[x]=qpow(k/x,n);
		for(int j=2; j*x<=k; j++) {
			(ans[x]-=ans[j*x])%=MOD;
            if(ans[x]<0) ans[x]+=MOD; // to handle negative values as %=MOD may produce negative values.
        }
		sum=sum+x*ans[x]%MOD;
		sum%=MOD; // sum %=MOD to handle summing  x*ans[x] and sum greater than MOD.
	}
	cout<<(sum+MOD)%MOD;
	return 0;
}