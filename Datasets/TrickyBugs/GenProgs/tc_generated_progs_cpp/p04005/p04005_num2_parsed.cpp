#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[4];

int main(){
	for(int i=1;i<=3;i++){
	   cin>>a[i];
	}

	sort(a+1,a+4);

	ll x = a[1]*a[2]*(a[3]/2);
	ll y = a[1]*a[2]*((a[3]+1)/2);
	
	ll min_diff = min(abs(x-(a[1]*a[2]*a[3])), abs(y-(a[1]*a[2]*a[3])));

	cout << min_diff << endl;

	return 0;
}