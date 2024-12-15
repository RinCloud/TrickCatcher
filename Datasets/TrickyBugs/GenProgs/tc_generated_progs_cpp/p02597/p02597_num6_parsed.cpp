#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n>>s;
	int r = 0, w = 0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='R'){
			r++;
		}
		else{
		    w++;
		}
	}
	int cnt = 0;
	for(int i=0;i<s.size();i++){
		if(i<w)
		    cnt += (s[i] == 'R');
		else
		    cnt += (s[i] == 'W');
	}
	cout<<cnt<<endl;
	return 0;
}