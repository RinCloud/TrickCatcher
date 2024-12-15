#include <iostream>
#include <vector>
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
    
    vector<int> count(N+1, 0);
    for (int i = 0; i < N; i++) {
        count[p[i]]++;
    }
    
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += (count[i] == i);
    }
    
    vector<bool> visited(N+1, false);
    for (const pair<int, int>& pair : pairs) {
        int x = pair.first;
        int y = pair.second;
        
        if (visited[x] || visited[y]) {
            continue;
        }
        
        if (p[x-1] == x && p[y-1] != y) {
            count[x]--;
        }
        if (p[y-1] == y && p[x-1] != x) {
            count[y]++;
        }
        
        visited[x] = true;
        visited[y] = true;
    }
    
    for (int i = 1; i <= N; i++) {
        ans = max(ans, ans + count[i]);
    }
    
    cout << ans << endl;

    return 0;
}