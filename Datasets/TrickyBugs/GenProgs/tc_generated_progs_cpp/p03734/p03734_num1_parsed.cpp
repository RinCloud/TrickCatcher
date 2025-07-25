#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
vector<ll> a[4];
map<ll, ll> b;
int main(){
	ll x, y, n, m, num, sum = 0;
	cin >> n >> m;
	for(int i = 0; i < n; ++i){
		cin >> x >> y;
		if(i == 0) num = x, a[0].push_back(y);
		else a[x-num].push_back(y);
		sum += x;
	}
	m = min(sum, m);
	b[0] = 0;
	ll num2 = (num > 1000 ? num : 1);
	for(int i = 0; i <= 3; ++i){
		for(int j = 0; j < a[i].size(); ++j){
			for(ll k = m; k >= i+num; k -= num2){
				b[k] = max(b[k], b[k-num-i]+a[i][j]);
			}
		}
	}
	cout<<b[m]<<endl;
	return 0;
}
