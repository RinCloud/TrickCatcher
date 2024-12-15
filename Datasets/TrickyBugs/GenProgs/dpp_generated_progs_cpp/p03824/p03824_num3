#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDepth(int v, const vector<vector<int>>& tree) {
	int maxDepth = 0;
	for (int u : tree[v]) {
		maxDepth = max(maxDepth, findDepth(u, tree));
	}
	return maxDepth + 1;
}

int main() {
	int N;
	cin >> N;
	vector<vector<int>> tree(N + 1);
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
	}

	int maxDepth = 0;
	for (int i = 1; i <= N; i++) {
		maxDepth = max(maxDepth, findDepth(i, tree));
	}

	cout << maxDepth - 1 << endl;

	return 0;
}