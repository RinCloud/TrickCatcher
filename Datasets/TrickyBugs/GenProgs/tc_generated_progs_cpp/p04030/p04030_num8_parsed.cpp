#include<bits/stdc++.h>
using namespace std;
int main(){
	string f,a;
	cin>>f;
	for(int j=0;j<f.length();j++){
		if(f[j]=='1'){
			a+='1';
		}else if(f[j]=='0'){
			a+='0';
		}else{
			if(!a.empty())
				a.pop_back();
		}
	}
	cout<<a;
	return 0;
}