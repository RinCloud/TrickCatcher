#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[100001];

int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> x;
		a[x]++;
	}

	int ans = 0, cnt = 0;
	for (int i = 0; i <= 100000; ++i){
		if (a[i] == 0) continue;
		if (a[i] & 1) ans++;
		else cnt++;
	}
	
	if (cnt == 0)
		cout << ans << endl;
	else
		cout << ans + cnt - 1 << endl;
}
