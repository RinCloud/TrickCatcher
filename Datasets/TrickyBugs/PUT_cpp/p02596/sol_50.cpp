#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	int n;
	cin>>n;
	int i,left;
	for(i=1;i<=n;i++){
		left=(7+left*10)%n;
		if(left==0){
			break;
		}
	}
	if(!left){
		cout<<i;
	}
	else{
		cout<<-1;
	}
	return 0;
}
