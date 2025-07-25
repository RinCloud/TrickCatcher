#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,ans,u[20];
int c[20],p[20];
void dfs(int x, int solved, int total_score, int& min_problems) {
	if (x>n) {
		if (total_score >= m) {
			min_problems = min(min_problems, solved);
		}
		return;
	}
	for (int i=0; i<=c[x] && solved+(i*p[x]) <= min_problems; i++) {
		dfs(x+1, solved + i * p[x], total_score + i * p[x] * 100 * x, min_problems);
	}
}
int main() {
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++) scanf("%d %d",&p[i],&c[i]);
	ans = INT_MAX;
	dfs(1, 0, 0, ans);
	printf("%d\n",ans);
	return 0;
}
