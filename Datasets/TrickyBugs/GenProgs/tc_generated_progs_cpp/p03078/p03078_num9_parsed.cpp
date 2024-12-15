#include <bits/stdc++.h>
#define rep(i,n) for(int i=(0);i<(n);i++)

using namespace std;

typedef long long ll;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int X, Y, Z, K;
	cin >> X >> Y >> Z >> K;

	vector<ll> A(X);
	rep(i, X) cin >> A[i];

	vector<ll> B(Y);
	rep(i, Y) cin >> B[i];

	vector<ll> C(Z);
	rep(i, Z) cin >> C[i];

	vector<ll> v;
	for(int i = 0; i < X; i++){
		for(int j = 0; j < Y; j++){
			v.push_back(A[i] + B[j]);
		}
	}

	sort(v.rbegin(), v.rend());

	vector<ll> w;
	for(int i = 0; i < min(K, (int)v.size()); i++){
		for(int j = 0; j < Z; j++){
			w.push_back(v[i] + C[j]);
		}
	}

	sort(w.rbegin(), w.rend());
	rep(i, K) cout << w[i] << endl;
}