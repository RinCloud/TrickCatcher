#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	int r,w;
	for(int i=0;i<s.size();i++){
		if(s[i]=='R'){
			r++;
		}
	}
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='R'){
			if(i>r-1){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}