#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long k;
	cin>>k;
	long long q=0, p=0;
	for(int i=0;i<int(s.size())-1;i++){
		if(s[i]==s[i+1]){
			q++;
			i++;
		}
	}
	string t;
	t=s+s;
	for(int i=0;i<int(t.size())-1;i++){
		if(t[i]==t[i+1]){
			p++;
			i++;
		}
	}
	long long ans=0;
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
