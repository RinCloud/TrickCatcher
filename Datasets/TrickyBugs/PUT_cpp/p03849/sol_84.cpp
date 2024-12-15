//実験によるクソ再帰
#include <iostream>
#include <unordered_map>
#define int long long
using namespace std;

int power[60];
unordered_map<int, int> memo;

int dfs(int n) {	
	if (n <= 1) { return 0; }
	if (memo.find(n) != memo.end()) { return memo[n]; }
	
	int i;
	for (i = 0; (1LL << i) <= n; i++); i--;
	int diff = n - (1LL << i) - (1LL << (i-1));
	int ret = power[i - 1] + dfs(n - (1LL << i)) + dfs(n - (1LL << (i-1))) - dfs(diff) * 2;
	
	return memo[n] = ret % 1000000007;
}

signed main() {
	power[0] = 1;
	for (int i = 1; i < 60; i++) {
		power[i] = power[i - 1] * 3;
		power[i] %= 1000000007;
	}
	
	int n;
	cin >> n;
	cout << dfs(n + 2) << endl;
	return 0;
}