#include<bits/stdc++.h>
using namespace std;
int n,m,f[100001];
int bb(int p){
	if(f[p]==p)return p;
	return f[p]=bb(f[p]);
}
int main(){
	cin>>n>>m;
	int i,x,y,z,t=m;
	for(i=1;i<=n;i++)f[i]=i;
	for(i=1;i<=m;i++){
		cin>>x>>y>>z;
		if(bb(x)==bb(y))t--;
		else f[bb(x)]=bb(y);
	}
	cout<<n-t;
	return 0;
}