#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e3+10;
const int inf = -1e9+100;
int n, a[maxn*3], dp[maxn][maxn], ans, now[maxn], add;
int  tp[maxn],tnow[maxn];
int tmpdp[maxn][maxn];
vector<vector<int>> card;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i = 1; i<=3*n; i++)
		cin>>a[i];
	if(n == 1)
	{
		cout<<(a[1]==a[2]&&a[2]==a[3]);
		return 0;
	}
	for(int i = 1; i<=n; i++)
		for(int j = 1; j<=n; j++)
			dp[i][j] = inf;
	ans = inf;
	for(int i = 1; i<=n; i++)
		now[i] = inf;
	for(int i = 1; i<=n; i++)
	{
		vector<int> v;
		if(i == 1)
		{
			for(int j = 1; j<=5; j++)
				v.push_back(a[j]);
		}
		else if(i == n)
		{
			v.push_back(a[3*n]);
		}
		else
		{
			for(int j = 3*i; j<=3*i+2; j++)
				v.push_back(a[j]);
		}
		card.push_back(v);
	}

	for(int i = 1; i<=5; i++)
		for(int j = 1; j<=5; j++)
		{
			if(i == j)
				continue;
			int pos = -1, val = 1;
			for(int k = 1; k<=5; k++)
			{
				if(k == i || k == j)
					continue;
				if(pos == -1)
					pos = a[k];
				else if(pos != a[k])
					val = 0;
			}
			dp[a[i]][a[j]] = dp[a[j]][a[i]] = val;
		}

	for(int i = 1; i<=n; i++)
		for(int j = i; j<=n; j++)
			now[j] = max(now[j], dp[i][j]);

	for(int i = 1; i<=n; i++)
		ans = max(ans, now[i]);

	for(int i = 1; i<=n-2; i++)
	{
		if(card[i][0] == card[i][1] && card[i][0] == card[i][2])
		{
			add++;
			continue;
		}
		for(int j = 1; j<=n; j++)
		{
			tp[j] = dp[j][j];
			tnow[j] = now[j];
		}
		for(int j = 0; j<=2; j++)
			for(int k = 1; k<=n; k++)
				tmpdp[card[i][j]][k] = tmpdp[k][card[i][j]] = dp[card[i][j]][k];
		int tans = ans;
		for(int j = 0; j<=2; j++)
		{
			int c1 = card[i][j], c2 = -1, c3 = -1;
			for(int k = 0; k<=2; k++)
			{
				if(j == k)
					continue;
				c2 = card[i][k];
				for(int u = 0; u<=2; u++)
				{
					if(u != j && u != k)
						c3 = card[i][u];
				}

				dp[c1][c2] = dp[c2][c1] = max(dp[c1][c2], dp[c2][c1]);
				if(c3 > 0)
					dp[c1][c2] = dp[c2][c1] = max(dp[c1][c2], tp[c3]+1);
				tnow[c1] = max(tnow[c1], dp[c1][c2]);
				tnow[c2] = max(tnow[c2], dp[c1][c2]);
				tans = max(tans, dp[c2][c1]);
			}
		}
		for(int j = 0; j<=2; j++)
		{
			int c1 = card[i][j], cur = -1;
			for(int k = 0; k<=2; k++)
			{
				if(j == k)
					continue;
				if(cur == -1)
					cur = card[i][k];
				else if(cur != card[i][k])
					cur = -1;
			}
			for(int k = 1; k<=n; k++)
			{
				dp[c1][k] = dp[k][c1] = max(dp[k][c1], dp[c1][k]);
				if(cur > 0)
					dp[c1][k] = dp[k][c1] = max(dp[c1][k], tmpdp[cur][k]+1);
				dp[c1][k] = max(dp[c1][k], dp[k][c1]);
				tnow[k] = max(tnow[k], dp[c1][k]);
				tnow[c1] = max(tnow[c1], dp[c1][k]);
				tans = max(tans, dp[c1][k]);
			}
		}

		for(int j = 1; j<=n; j++)
			now[j] = max(now[j], tnow[j]);
		ans = max(ans, tans);
	}
	ans = max(ans, dp[card[n-1][0]][card[n-1][0]]+1);
	cout<<ans+add;
	return 0;
}