#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
const int md=998244353;
const int mx=4005;
int n,k;
ll exp(ll b, ll n){
	ll res = 1;
	for(;n;n>>=1,(b*=b)%=md)if(n&1)(res*=b)%=md;
	return res;
}
ll fact[mx]={1},invf[mx];
inline void init(int n){
	for(int i=1;i<=n;i++) fact[i]=(fact[i-1]*i)%md;
	invf[n]=exp(fact[n],md-2);
	for(int i=n;i>0;i--) invf[i-1]=(invf[i]*i)%md;
}
inline ll comb(int a,int b){return fact[a]*invf[a-b]%md *invf[b]%md;}
inline ll nkcom(int n,int k){return comb(n+k-1,n);}
inline ll calc(int n,int k,int t){
	ll ret=0;
	rep(i,t+1) ret=(ret+nkcom(n-i,k-t*2+i)*comb(t,i)%md*exp(2,i))%md;
	return ret;
}
int main(){
	scanf("%d%d",&k,&n);
	init(k+n);
	for(int i=1;i<2*k;i++){
		int t=min(i,2*k-i);
		printf("%lld\n",t&1 ?(calc(n-1,k-1,t/2)+calc(n,k-1,t/2))%md:calc(n,k,t/2));
	}
}
