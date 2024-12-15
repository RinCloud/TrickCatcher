#include <iostream>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	int ans = 0, bns = 0;
	bool a[26] = {false}, b[26] = {false};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			a[s[j]-'a'] = true;
		}
		for (int j = i; j < n; j++) {
			b[s[j]-'a'] = true;
		}
		for (int j = 0; j < 26; j++) {
			if (a[j] && b[j]) bns++;
		}
		if (ans < bns) ans = bns;

		for (int j = 0; j < 26; j++) {
			a[j] = false;
			b[j] = false;
		}
		bns = 0;
	}

	// Count common letters when one substring becomes empty
	for (int j = 0; j < n; j++) {
		a[s[j]-'a'] = true;
		if (ans < 1) ans = 1;
	}

	cout << ans;

	return 0;
}
