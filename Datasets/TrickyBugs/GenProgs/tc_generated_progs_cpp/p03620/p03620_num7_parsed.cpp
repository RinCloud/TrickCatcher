#include <bits/stdc++.h>
using namespace std;

using pii = pair<int,int>;
#define f(i,a,b) for (int i = a; i < b; i++)
#define fr(i,a,b) for (int i = b-1; i >= a; i--)
#define Min(a,b) a=min(a,b)
#define Max(a,b) a=max(a,b)
#define pb push_back

const int oo = 1e9;

string a,b;
int n;

int solve() {
	int x[n],y[n];	
	{
		int j = 0;
		f(i,0,n) if (b[i]-'0') j = i;
		j -= n;
		f(i,0,n) {
			if (b[i]-'0') j = i;
			x[i] = i-j;
		}
		j = n;
		fr(i,0,n) if (b[i]-'0') j = i;
		j += n;
		fr(i,0,n) {
			if (b[i]-'0') j = i;
			y[i] = j-i;
		}
	}
	int ans = oo;
	f(d,0,n) {
		vector<pii> dp;
		int cost = d;
		f(i,0,n) if (a[i] != b[(i+d)%n]) {
			cost++;
			if (y[i]>d) dp.pb({x[i],y[(i+d)%n]});
		}
		sort(begin(dp),end(dp));
		int delta = dp.size()?oo:0;
		int Y = 0;
		fr(i,0,dp.size()) {
			Min(delta,2*(dp[i].first+Y));
			Max(Y,dp[i].second);
		}
		Min(ans,cost+delta);
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t start = clock();
#endif

	cin>>a>>b;
	n = a.length();
	bool contain1 = 0;
	f(i,0,n) if (b[i]-'0') contain1 = 1;
	if (a==b) cout << 0 << endl;
	else if (!contain1) cout << -1 << endl;
	else {
		int ans = solve();
		reverse(begin(a),end(a));
		reverse(begin(b),end(b));
		Min(ans,solve());
		cout << ans << endl;
	}

#ifdef LOCAL
	cout << setprecision(12) << (long double)(clock()-start) / CLOCKS_PER_SEC << endl;
#endif
	
	return 0;
}