#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define N 1000000007
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define sz(x) int(x.size())
int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	int q=0;
	rep(i,sz(s)-1){
		if(s.at(i)==s.at(i+1)){
			q++;
			i++;
		}
	}
	string t;
	t=s;
	int p=q;
	int flag=0;
	if(sz(set(all(s)))==1){
		flag=1;
	}
	if(flag==1){
		int ans=sz(s)*k/2;
		cout<<ans<<endl;
		return 0;
	}
	t=t+s;
	rep(i,sz(t)-1){
		if(t.at(i)==t.at(i+1)){
			p++;
			i++;
		}
	}
	ll ans=0;
	if(k%2==0){
		ans=(p-q);
		ans*=(k/2);
		ans+=q;
	}else{
		ans=p;
		ans*=(k/2);
		ans+=q;
	}
	cout<<ans<<endl;
	return 0;
}

