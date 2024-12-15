#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> p(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }
    vector<pair<int, int>> swaps(M);
    for (int i = 0; i < M; i++) {
        cin >> swaps[i].first >> swaps[i].second;
    }
    
    vector<int> pos(N+1);
    for (int i = 1; i <= N; i++) {
        pos[p[i]] = i;
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (p[i] == i) {
            cnt++;
        }
    }
    
    int ans = cnt;
    for (int i = 0; i < M; i++) {
        int x = swaps[i].first;
        int y = swaps[i].second;
        swap(p[x], p[y]);
        if (p[x] == x) {
            cnt--;
        }
        if (p[y] == y) {
            cnt--;
        }
        if (p[x] == y) {
            cnt++;
        }
        if (p[y] == x) {
            cnt++;
        }
        ans = max(ans, cnt);
    }
    
    cout << ans << endl;

    return 0;
}