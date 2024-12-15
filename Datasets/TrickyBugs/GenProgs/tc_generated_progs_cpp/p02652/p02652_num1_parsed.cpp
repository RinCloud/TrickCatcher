#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1001001;
char s[N];
int n;
int main(){
	ios::sync_with_stdio(false);
	cin>>s;
	n=strlen(s);
	int l=0,r=0;
	int l0=0,r0=0;
	int l1=-2;
	int r1=2;
	int unbalancedness=0;
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		char c=s[i];
		if(c=='1'){
			l0++;
			r0++;
		}
		else if(c=='0'){
			l0--;
			r0--;
		}
		else{
			l0--;
			r0++;
		}
		unbalancedness=max(abs(r0-l0), max(abs(l0-l1), abs(r0-r1)));
		ans=min(ans, unbalancedness);
		l1=min(l1, l0);
		r1=max(r1, r0);
	}
	cout<<ans<<endl;
	return 0;
}
