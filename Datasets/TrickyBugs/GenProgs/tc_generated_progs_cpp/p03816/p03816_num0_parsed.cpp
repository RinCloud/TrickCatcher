#include <bits/stdc++.h>
using namespace std;

int n, x;
map<int, int> m;

int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> x;
		m[x]++;
	}

	int ans = 0, cnt = 0;
	for(auto ele: m) {
		if (ele.second%2==1) ans++;
		else cnt++;
	}

	cout << ans + cnt - (cnt%2==1) << endl;
}

