#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    vector<int> counts;
    for (auto it : freq) {
        counts.push_back(it.second);
    }
    sort(counts.begin(), counts.end(), greater<int>());
    int ans = 0;
    for (int i = k; i < counts.size(); i++) {
        ans += counts[i];
    }
    cout << ans << endl;
}
