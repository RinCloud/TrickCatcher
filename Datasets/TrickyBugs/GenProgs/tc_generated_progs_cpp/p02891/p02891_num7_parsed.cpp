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
	ll k;
	cin>>k;
	ll q=0;
	rep(i,sz(s)-1){
		if(s.at(i)==s.at(i+1)){
			q++;
			i++;
		}
	}
	string t;
	t=s+s;
	ll p=0;
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
		ans+=q*(k/2);
	}else{
		ans=p*(k/2);
		ans+=q;
	}
	cout<<ans<<endl;
	return 0;
}