#include"bits/stdc++.h"

using namespace std;

int main() {
	long long N = 0;
	int M;
	cin >> N >> M;
	vector < pair<long long, int>>V;
	long long ans = 0;
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		V.push_back({ A,1 });
	}
	for (int i = 0; i < M; i++)
	{
		int B, C;
		cin >> B >> C;
		V.push_back({ C,B });
	}
	sort(V.rbegin(), V.rend());
	for (int i = 0; i < V.size(); i++)
	{
		long long C = min((long long)V[i].second, N);
		N -= C;
		ans += (long long)C*V[i].first;
	}
	cout << ans;
	return 0;
}
