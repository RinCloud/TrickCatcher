#include<bits/stdc++.h>
using namespace std;

int main() {
	
	//read input
	int n;
	cin >> n;
	
	vector<int> a(n);

	for (int i = 0; i < n; ++i) 
		cin >> a[i];

	sort(a.begin(), a.end());

	int unique_cards = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (a[i] != a[i + 1])
			++unique_cards;
	}

	int maximum_remaining = unique_cards + 1;
	cout << maximum_remaining << endl;

	//returning 0 to indicate normal termination & no error
	return 0;
}