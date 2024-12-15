#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector < pair<long long, int>>V;
	long long ans = 0; //initialize ans variable
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		ans += A; //add each integer A to ans
		V.push_back({ A,1 });
	}
	for (int i = 0; i < M; i++)
	{
		int B, C;
		cin >> B >> C;
		ans += B * C - V[B - 1].first; //update ans by adding the difference between B*C and the original value of the Bth element in V
		V[B - 1].first = C; //update the value of the Bth element in V to C
	}
	cout << ans << endl;
	return 0;
}