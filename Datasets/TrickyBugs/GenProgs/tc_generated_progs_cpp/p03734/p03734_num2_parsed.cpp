#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long


int main(){
	ll x, y, n, m, num, sum = 0;
	scanf("%lld%lld", &n, &m);
	vector<vector<ll>> a(4);
	map<ll, ll> b;
	for(int i = 0; i < n; ++i){
		scanf("%lld%lld", &x, &y);
		if(i == 0) num = x, a[x-num].push_back(y);
		else a[x-num].push_back(y);
		sum += x;
	}
	m = min(sum, m);
	b[0] = 0;
	ll num2 = (num > 1000 ? num : 1);
	for(int i = 0; i <= 3; ++i){
		for(int j = 0; j < a[i].size(); ++j){
			
			for(ll k = m; k >= i+num; k -= num2){
				if(b.count(k-num-i) == 0){
					b[k] = b[k-num-i]+a[i][j];
				}else{
					b[k] = max(b[k], b[k-num-i]+a[i][j]);
				}
			}
		}
	}
	cout<<b[m]<<endl;
	return 0;
}
