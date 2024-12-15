#include<iostream>
#define MAXN 32768
using namespace std;
int a[MAXN], b[MAXN], c[MAXN]={}, n, k, i;
int main(){
	cin>>n>>k;
	for(i = 1; i < MAXN; ++i){
		a[i]=i<n?i:n;
		b[i]=n/i;
	}
	while(--k){
		for(i = 1; i < MAXN; ++i){
			c[i]=c[i-1]+b[i];
		}
		for(i = MAXN-1; i > 0; --i){
			b[i]=(c[n/i]-c[n/(i+1)])%1000000007;
			a[i]=c[i];
		}
	}
	cout<<(b[1]+1000000007)%1000000007;
}
