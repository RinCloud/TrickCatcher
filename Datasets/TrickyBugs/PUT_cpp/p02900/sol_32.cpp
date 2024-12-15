#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a%b);
}


int main(){
	ll a,b,ans=0,g;
	scanf("%lld%lld",&a,&b);
	g=gcd(a,b);
	for(int i=2;i<=sqrt(g);i++){
		if(g%i==0){
			ans++;
			while(g%i==0)g/=i;
		}
	}
	if(g>2)ans++;
	cout<<ans+1<<endl;
}