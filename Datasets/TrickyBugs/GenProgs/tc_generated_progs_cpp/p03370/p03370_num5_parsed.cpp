#include<bits/stdc++.h>
using namespace std;
int ans;


int main(){
	int n,x;
	cin>>n>>x;
	ans=n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		x-=a[i];
		if(x<0) break;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
