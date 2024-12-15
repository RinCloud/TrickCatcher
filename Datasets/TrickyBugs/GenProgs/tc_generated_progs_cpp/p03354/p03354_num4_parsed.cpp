// D - Equals
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main(){
	int n, m; cin>>n>>m;
	vi P(n); rep(i, n){ cin>>P[i]; P[i]--; }
	vvi G(n, vi(n, false));
	rep(i, m){
		int x, y; cin>>x>>y; x--, y--;
		G[x][y] = G[y][x] = true;
	}

	int ans = 0;
	vi vis(n, false);
	queue<int> q;
	rep(i, n){
		vi xx, px;
		q.push(i);
		while(q.size()){
			int x = q.front(); q.pop();
			if(vis[x]) continue;
			vis[x] = true;
			xx.push_back(x), px.push_back(P[x]);
			for(int y=0; y<n; ++y){
				if(vis[y] || !G[x][y]) continue;
				q.push(y);
			}
		}
		sort(all(xx)), sort(all(px));
		for(int x:xx)
			if(px[lower_bound(all(px), x) - px.begin()] == x) ans++;
	}
	cout<< ans <<endl;
}
