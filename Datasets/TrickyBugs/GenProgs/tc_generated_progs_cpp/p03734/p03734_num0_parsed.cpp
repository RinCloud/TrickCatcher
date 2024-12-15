#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
ll a[4][110];
ll b[110][110][110];
int main(){
	ll x, y, n, m, num, sum = 0;
	scanf("%lld%lld", &n, &m);
	for(int i = 1; i <= n; ++i){
		scanf("%lld%lld", &x, &y);
		if(i == 1) num = x;
		for(int j = 0; j <= 3; ++j){
			a[j][i] = a[j][i-1];
		}
		a[x-num][i] = max(a[x-num][i], y);
		sum += x;
	}
	m = min(sum, m);
	b[0][0][0] = 0;
	ll num2 = (num > 1000 ? num : 1);
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j <= m; ++j){
			for(int k = 0; k <= n; ++k){
				b[i][j][k] = b[i][j][k-1];
				if(j >= i+num && k > 0){
					b[i][j][k] = max(b[i][j][k], b[i][j-num-i][k-1]+a[i][k]);
				}
			}
		}
	}
	cout<<b[3][m][n]<<endl;
	return 0;
}
