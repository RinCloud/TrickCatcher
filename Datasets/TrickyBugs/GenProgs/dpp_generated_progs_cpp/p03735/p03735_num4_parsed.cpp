#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> bags(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        bags[i] = {x, y};
    }

    sort(bags.begin(), bags.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return min(a.first, a.second) < min(b.first, b.second);
    });

    int R_max = bags[N-1].first;
    int R_min = min(bags[N-1].first, bags[N-1].second);
    int B_max = -1;
    int B_min = INT_MAX;

    for (int i = 0; i < N; i++) {
        B_max = max(B_max, max(bags[i].first, bags[i].second));
        B_min = min(B_min, max(bags[i].first, bags[i].second));
    }

    int ans = (R_max - R_min) * (B_max - B_min);
    cout << ans << endl;

    return 0;
}