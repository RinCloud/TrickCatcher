#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	int n;
	cin>>n;
	int i,left;
	left = 7 % n;
	for(i=1;i<=n;i++){
		if(left==0){
			break;
		}
		left=(left*10 + 7)%n;
	}
	if(!left){
		cout<<i;
	}
	else{
		cout<<-1;
	}
	return 0;
}