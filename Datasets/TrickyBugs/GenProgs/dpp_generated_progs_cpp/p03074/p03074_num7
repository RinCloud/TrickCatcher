#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    vector<int> cnt;
    int cur = 1;
    for (int i = 1; i < N; i++) {
        if (S[i] == S[i-1]) {
            cur++;
        } else {
            cnt.push_back(cur);
            cur = 1;
        }
    }
    cnt.push_back(cur);

    int ans = 0;
    for (int i = 0; i < cnt.size(); i += 2) {
        int l = i, r = min(i + 2 * K, (int)cnt.size());
        int sum = 0;
        for (int j = l; j < r; j++) {
            sum += cnt[j];
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}