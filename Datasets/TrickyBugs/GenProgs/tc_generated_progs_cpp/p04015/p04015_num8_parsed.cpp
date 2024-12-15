#include <bits/stdc++.h>
using namespace std;

long long n, a, ans, x[100], w[5000][100];
int main(){
	cin >> n >> a;
	w[0][0] = 1;
	for(int i = 0; i < n; i++){
		cin >> x[i];
		for(int j = 1; (j*a-x[i]) <= 3000; j++){
			if(j*a-x[i] >= 0) ans += w[j*a-x[i]][j-1];
		}
		for(int j = 100; j >= 1; j--){
			for(int k = 3000; k >= x[i]; k--){
				w[k][j] += w[k-x[i]][j-1];
			}
		}
	}
	cout << ans;
}
