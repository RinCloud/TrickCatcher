#include<bits/stdc++.h>
#define for0(i, n) for(int i = 0; i < (n); i++)
#define mp make_pair
#define puts(x) cout << x << endl
using namespace std;
int h, w, n;
pair<int, int>p[234567];
int k[234567], d = 1, ans;
int main() {
	cin >> h >> w >> n;
	for0(i, n)cin >> p[i].second >> p[i].first;
	sort(p, p + n);
	k[1] = 1; ans = h;
	for0(i, n) {
		int x = p[i].first, y = p[i].second;
		while (d < x) k[d + 1] = k[d++] + 1;         // switching x and y
		if (k[x] == y)k[x]++;
		else if (k[x] < y)ans = min(ans, y - 1);   // switching x and y
	}
	puts(ans);
}