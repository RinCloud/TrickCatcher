#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<pair<long long, int>> V;
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
		long long C = min(V[i].second, N);
		N -= C;
		ans += C*V[i].first;
	}
	cout << ans << endl;
	return 0;
}
