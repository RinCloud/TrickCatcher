#include<cstdio>
#include<string>
#include<unordered_map>
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	unordered_map<string, int> freq;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		int minLen = 1;
		while (minLen < s.size() && s[minLen] == s[0]) {
			minLen++;
		}
		string key = s.substr(minLen) + s[0];
		ans += freq[key];
		for (int j = minLen; j < s.size(); j++) {
			string newKey = s.substr(j) + s.substr(0, j);
			freq[newKey]++;
		}
	}
	cout << ans << endl;

	return 0;
}
