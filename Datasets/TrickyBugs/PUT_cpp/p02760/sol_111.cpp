#include<bits/stdc++.h>

using namespace std;

int n,a[3][3];
bool v[100],l[3]={1,1,1},r[3]={1,1,1},ans=0;

int main() {
	for(int i=0,j,x; i<3; ++i)
		for(j=0; j<3; ++j) 
			scanf("%d",&a[i][j]);
	scanf("%d",&n);
	for(int i=1,x; i<=n; ++i) {
		scanf("%d",&x);
		v[x]=1;
	}
	for(int i=0,j; i<3; ++i) {
		for(j=0; j<3; ++j)
			l[i]&=v[a[i][j]],r[j]&=v[a[i][j]];
	}
	for(int i=0; i<3; ++i) ans|=l[i]|r[i];
	if(v[a[0][0]] && v[a[1][1]] && v[a[2][2]]) ans=1;
	if(v[a[0][2]] && v[a[1][1]] && v[a[2][0]]) ans=1;
	puts(ans ? "Yes":"No");
	return 0;
}