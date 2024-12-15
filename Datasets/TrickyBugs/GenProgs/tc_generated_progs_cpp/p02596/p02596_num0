#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	int n;
	cin>>n;
	int i,left=7;
	for(i=1;i<=n+10;i++){
		if(left%n==0){
			break;
		}
		left=(left*10+7)%n;
	}
	if(left==0){
		cout<<i;
	}
	else{
		cout<<-1;
	}
	return 0;
}