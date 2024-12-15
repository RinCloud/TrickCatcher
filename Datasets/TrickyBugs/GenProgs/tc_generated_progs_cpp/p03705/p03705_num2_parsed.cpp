#include"bits/stdc++.h"
using namespace std;
int main(){
	long long n,a,b;
	cin>>n>>a>>b;
	if(b > c || c-b > a){
		cout<<0;
		return 0;
	}
	cout<<(a-1)*b+n-(b+(n-1)*a)+1;
}
