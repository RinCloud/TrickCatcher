#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;

	ll a[n+1];
	for(int i =1;i <= n;i++){
		cin>>a[i];
	}

	ll ans[n+1];
	ans[0] = 0;
	ans[1] = a[1];

	for(int i =2;i <= n;i++){
		ans[i] = max(ans[i-1], ans[i-2] + a[i]);
	}

	cout<<ans[n]<<"\n";

	return 0;
}
