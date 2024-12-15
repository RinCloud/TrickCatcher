#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    sort(points.begin(), points.end());
    
    vector<int> prefix_count(N+1);
    vector<int> suffix_count(N+1);
    
    prefix_count[0] = 1;
    int prev_y = INT_MIN;
    for (int i = 0; i < N; i++) {
        prefix_count[i+1] = (2 * prefix_count[i]) % MOD;
        if (points[i].second > prev_y) {
            prefix_count[i+1]++;
        }
        prev_y = points[i].second;
    }
    
    suffix_count[N] = 1;
    int prev_y = INT_MAX;
    for (int i = N-1; i >= 0; i--) {
        suffix_count[i] = (2 * suffix_count[i+1]) % MOD;
        if (points[i].second < prev_y) {
            suffix_count[i]++; 
        }
        prev_y = points[i].second;
    }
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans = (ans + 1LL * points[i].first * prefix_count[i] % MOD * suffix_count[i+1]) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}