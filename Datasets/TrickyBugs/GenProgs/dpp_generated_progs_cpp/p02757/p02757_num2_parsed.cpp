#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long solve(string s, int p) {
    long long ans = 0;
    int n = s.size();
    vector<int> cnt(p, 0);
    int pow10 = 1;
    int cur = 0;
    
    for (int i = n-1; i >= 0; i--) {
        cur = (cur + (s[i]-'0') * pow10) % p;
        pow10 = (pow10 * 10) % p;
        cnt[cur]++;
    }
    
    ans += cnt[0];
    for (int i = 0; i < p; i++) {
        ans += 1LL * cnt[i] * (cnt[i] - 1) / 2;
    }
    
    return ans;
}

int main() {
    int n, p;
    string s;
    cin >> n >> p >> s;

    cout << solve(s, p) << endl;

    return 0;
}