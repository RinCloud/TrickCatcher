#include<iostream>
using namespace std;
int main(){
	char a[11],i=0;
	cin>>a;
	for(int j=0;a[j]!='\0';j++){
		if(a[j]=='1'){
			a[i]='1';
			i++;
		}else if(a[j]=='0'){
			a[i]='0';
			i++;
		}else{
			i=max(0,i-1);
			a[i]=0;
		}
	}
	a[i] = '\0';
	cout<<a<<endl;
	return 0;
}
