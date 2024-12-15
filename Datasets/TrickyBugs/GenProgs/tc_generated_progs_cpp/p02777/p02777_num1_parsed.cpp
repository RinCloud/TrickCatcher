#include<bits/stdc++.h>
using namespace std;
int a,b;
string s1,s2,s3; 
int main() {
	cin>>s1>>s2;
	cin>>a>>b;
	cin>>s3;
	if(s1==s3) a--;
	else b--;
	cout<<a<<" "<<b;
	return 0;
}
