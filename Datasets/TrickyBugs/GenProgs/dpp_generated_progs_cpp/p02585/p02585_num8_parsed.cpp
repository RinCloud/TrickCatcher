#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> P(N+1), C(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }
    
    long long ans = -1e18;
    
    for (int i = 1; i <= N; i++) {
        vector<int> visited(N+1);
        int pos = i;
        long long cycle_sum = 0;
        long long cycle_len = 0;
        while (!visited[pos]) {
            visited[pos] = 1;
            cycle_sum += C[pos];
            cycle_len++;
            pos = P[pos];
        }
        if (cycle_sum <= 0) {
            for (int j = 1; j < cycle_len && j <= K; j++) {
                long long score = cycle_sum * (K / cycle_len - (j - 1) / cycle_len - 1);
                ans = max(ans, score);
            }
        }
        for (int j = 1; j <= cycle_len && j <= K; j++) {
            long long score = cycle_sum * ((K - j + cycle_len) / cycle_len);
            ans = max(ans, score);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}