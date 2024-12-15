#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    vector<pair<int, int>> pairs(M);
    for (int i = 0; i < M; i++) {
        cin >> pairs[i].first >> pairs[i].second;
    }

    vector<int> cnt(N + 1);
    for (int i = 0; i < N; i++) {
        if (p[i] != i + 1) {
            cnt[p[i]]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < M; i++) {
        int x = pairs[i].first;
        int y = pairs[i].second;

        if (p[x - 1] == x && cnt[x] == 0) {
            ans++;
        }
        if (p[y - 1] == y && cnt[y] == 0) {
            ans++;
        }

        cnt[p[x - 1]]--;
        cnt[p[y - 1]]++;

        swap(p[x - 1], p[y - 1]);

        if (p[x - 1] == x && cnt[x] == 0) {
            ans--;
        }
        if (p[y - 1] == y && cnt[y] == 0) {
            ans--;
        }

        cout << ans << endl;
    }

    return 0;
}