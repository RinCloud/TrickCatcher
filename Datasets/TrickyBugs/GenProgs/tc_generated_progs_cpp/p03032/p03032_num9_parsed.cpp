#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	if (k >= n * 2)
	{
		int ans = 0;
		for (int i = 0; i < n; i++)
			if (v[i] >= 0) // bug fix
				ans += v[i];
		cout << ans << endl;
		return 0;
	}

	int ans = 0;
	for (int a = 0; a <= min(k, n); a++) // bug fix
		for (int b = 0; b <= min(k - a, n); b++) // bug fix
		{
			int c = k - a - b;
			int tmp = 0;
			vector<int> have;
			for (int i = 0; i < a; i++)
				have.push_back(v[i]);
			for (int i = 0; i < b; i++)
				have.push_back(v[n - 1 - i]);
			sort(have.begin(), have.end());
			for (int i = 0; i < have.size(); i++)
				if (!(have[i] < 0 and i < c)) // bug fix
					tmp += have[i];
			ans = max(tmp, ans);
		}

	cout << ans << endl;
}