#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    
    vector<int> x(N), v(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> v[i];
    }
    
    // Calculate the prefix sum of the value of sushi at each point
    vector<long long> prefix_sum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + v[i];
    }
    
    // Calculate the suffix sum of the value of sushi at each point, considering the distance between the counter ends
    vector<long long> suffix_sum(N + 1, 0);
    for (int i = N - 1; i >= 0; i--) {
        suffix_sum[i] = suffix_sum[i + 1] + v[i];
    }
    
    // Calculate the maximum possible value of the total nutrition taken in minus the total energy consumed
    long long ans = 0;
    for (int i = 0; i <= N; i++) {
        // Case 1: Starting from the beginning of the counter and going straight
        ans = max(ans, prefix_sum[i] - x[i]);
        
        // Case 2: Starting from the end of the counter and going straight
        ans = max(ans, suffix_sum[i] - (C - x[i]));
        
        // Case 3: Starting from the beginning of the counter and going straight until a sushi, then turning back
        for (int j = 0; j < i; j++) {
            ans = max(ans, prefix_sum[i] - x[i] + suffix_sum[j] - (C - x[j]) - min(x[i], C - x[j]));
        }
        
        // Case 4: Starting from the end of the counter and going straight until a sushi, then turning back
        for (int j = 0; j < i; j++) {
            ans = max(ans, suffix_sum[i] - (C - x[i]) + prefix_sum[j] - x[j] - min(C - x[i], x[j]));
        }
    }
    
    cout << ans << endl;
    
    return 0;
}