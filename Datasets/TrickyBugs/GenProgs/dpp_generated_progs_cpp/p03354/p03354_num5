#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> p(N);
    for (int i = 0; i < N; ++i) {
        cin >> p[i];
    }

    vector<vector<int>> pairs(M, vector<int>(2));
    for (int i = 0; i < M; ++i) {
        cin >> pairs[i][0] >> pairs[i][1];
    }
    
    vector<int> count(N + 1);
    for (int i = 0; i < N; ++i) {
        if (p[i] == i + 1) {
            count[i + 1] = 1;
        }
    }
    
    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        ans += count[i];
    }
    
    for (int i = 0; i < M; ++i) {
        int x = pairs[i][0];
        int y = pairs[i][1];
        
        count[p[x - 1]] -= 1;
        count[p[y - 1]] -= 1;
        
        swap(p[x - 1], p[y - 1]);
        
        count[p[x - 1]] += 1;
        count[p[y - 1]] += 1;
        
        ans = max(ans, ans - count[x] - count[y] + count[p[x - 1]] + count[p[y - 1]]);
        
        cout << ans << endl;
    }
    
    cout << ans << endl;
    
    return 0;
}