#include<bits/stdc++.h>
using namespace std;

long long a[4];
long long n,i;
int main(){
	for(i=1;i<=3;i++)
	   cin>>a[i];
	sort(a+1,a+4);
	cout << (a[1] * a[2] * (a[3] % 2 == 0)) << endl;
	return 0;
}
