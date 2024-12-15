#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<long long> x(N), y(N), z(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    
    long long ans = 0;
    for (int i = 0; i < (1 << 3); i++) {
        vector<long long> sum(N);
        for (int j = 0; j < N; j++) {
            sum[j] = (i & (1 << 0)) ? x[j] : -x[j];
            sum[j] += (i & (1 << 1)) ? y[j] : -y[j];
            sum[j] += (i & (1 << 2)) ? z[j] : -z[j];
        }
        sort(sum.rbegin(), sum.rend());
        long long total = 0;
        for (int j = 0; j < M; j++) {
            total += abs(sum[j]);
        }
        ans = max(ans, total);
    }
    
    cout << ans << endl;
    
    return 0;
}