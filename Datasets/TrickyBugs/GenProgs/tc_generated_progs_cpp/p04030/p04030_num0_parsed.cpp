#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[11];
	string f;
	cin>>f;
	int i=0;
	for(int j=0;j<f.length();j++){
		if(f[j]=='1'){
			a[i]='1';
			i++;
		}else if(f[j]=='0'){
			a[i]='0';
			i++;
		}else{
			i=max(0,i-1);
		}
	}
	a[i]='\0';
	cout<<a;
	return 0;
}
