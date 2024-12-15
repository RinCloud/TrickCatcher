#include"bits/stdc++.h"
using namespace std;
int main(){
	long long n,a,b;
	cin>>n>>a>>b;
	if(b < a || b > a * n){
		cout<<0;
		return 0;
	}
	cout<<(a-1)*n+b-(n+(a-1)*b)+1;
}