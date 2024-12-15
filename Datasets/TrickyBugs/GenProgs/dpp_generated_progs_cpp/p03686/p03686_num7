#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> left(N), right(N);
    for (int i = 0; i < N; i++) {
        cin >> left[i] >> right[i];
    }
    
    vector<pair<int, int>> events;
    for (int i = 0; i < N; i++) {
        events.push_back({left[i], -1});
        events.push_back({right[i], 1});
    }
    
    sort(events.begin(), events.end());
    
    int cnt = 0;
    int maxCnt = 0;
    for (int i = 0; i < 2 * N; i++) {
        cnt -= events[i].second;
        maxCnt = max(maxCnt, cnt);
    }
    
    int res = maxCnt - M;
    if (res < 0) {
        res = 0;
    }
    
    cout << res << endl;
    
    return 0;
}