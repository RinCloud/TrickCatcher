#include"bits/stdc++.h"
using namespace std;
int main(){
	long long N,A,B;
	cin>>N>>A>>B;
	if(A > B || B-A > N-1){
		cout<<0;
		return 0;
	}
	cout<<(B-A)*(N-2)+1;
}