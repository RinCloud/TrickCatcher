#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
char s[N];
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	scanf("%s", s);
	int p = 0, f = 0;
	for (int i = 0; i < k; ++ i) {
		bool c = (s[p] == 'A') ^ f;
		s[p] = c ? 'B' : 'A';
		f ^= !c; //changed the logic to flip 'f' when c is true
		(++ p) %= n;
	}
	for (int i = 0; i < n; ++ i) {
		bool c = (s[(i + p) % n] == 'A') ^ f;
		putchar(c ? 'A' : 'B');
	}
	puts("");
}
