#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;

	ll a[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}

	ll ans[n+1];
	ans[1] = a[1];
	ans[2] = max(a[1], a[2]);

	if(n >= 3) {
		ans[3] = max(a[2], a[3]);
	}

	ll odd_sum[n+1];
	odd_sum[1] = a[1];

	for(int i = 3; i <= n; i += 2){
		odd_sum[i] = odd_sum[i-2] + a[i];
	}

	for(int i = 4; i <= n; i++){
		if(i % 2 == 0) {
			ans[i] = ans[i-2] + a[i];
			ans[i] = max(ans[i], odd_sum[i-1]); //consider all odd indices values
		}
		else {
			ans[i] = max(ans[i-1], ans[i-2] + a[i]);
		}
	}

	cout << ans[n] << "\n";

	return 0;
}
