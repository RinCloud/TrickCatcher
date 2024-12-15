#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, x;
	int a[2000];

	cin >> N >> x;
	for(int i=0; i<N; i++) cin >> a[i];

	int res = 0;
	for(int i=0; i<N; i++){
		res += a[i];
	}

	for(int m=0; m<N; m++){
		int tot = m * x;
		for(int i=0; i<N; i++){
			int b = min(a[i], a[(i-1+N) % N]);
			tot += b;
			a[i] -= b;
			a[(i-1+N)%N] -= b;
		}
		res = min(res, tot);
	}
	cout << res << endl;
	return 0;
}
