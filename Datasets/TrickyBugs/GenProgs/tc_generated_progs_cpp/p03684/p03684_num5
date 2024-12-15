#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

const int MAXN = 1e5 + 10;
int N;
struct Node {
	int x, y, id;
} A[MAXN];
int fa[MAXN];
long long ans;

inline int gf(int x) {
	return x == fa[x] ? x : fa[x] = gf(fa[x]);
}

int main() {
	register int i;
	scanf("%d", &N);
	for(i = 1; i <= N; ++i) scanf("%d%d", &A[i].x, &A[i].y), A[i].id = i;
	sort(A + 1, A + N + 1, [&] (Node x, Node y) {return x.x < y.x;});
	vector<pair<int, pair<int, int>>> E;
	for(i = 1; i < N; ++i) E.push_back(make_pair(A[i + 1].x - A[i].x, make_pair(A[i].id, A[i + 1].id)));
	sort(A + 1, A + N + 1, [&] (Node x, Node y) {return x.y < y.y;});
	for(i = 1; i < N; ++i) E.push_back(make_pair(A[i + 1].y - A[i].y, make_pair(A[i].id, A[i + 1].id)));
	sort(E.begin(), E.end());
	for(i = 1; i <= N; ++i)
	    fa[i] = i;
	for(i = 1; i <= 2 * N - 2; ++i){
	    int u=gf(E[i].second.first);
	    int v=gf(E[i].second.second);
		if(u != v){
		     fa[u]=v; 
		     ans += E[i].first;
		}
	}
	printf("%lld\n", ans);
	return 0;
}