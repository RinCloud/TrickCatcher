#include<bits/stdc++.h>
using namespace std;
int main(){
	string str, a;
	cin>>str;
	for(int j=0; j<str.length(); j++){
		if(str[j] == '1'){
			a += '1';
		}else if(str[j] == '0'){
			a += '0';
		}else{
			if(a.length() != 0){
				a.pop_back();
			}
		}
	}
	cout<<a;
	return 0;
}
