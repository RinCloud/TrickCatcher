#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    vector<int> x(N), v(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> v[i];
    }
    
    vector<long long> sumL(N+1), sumR(N+1);
    vector<long long> dpL(N+1), dpR(N+1);
    for (int i = 0; i < N; i++) {
        sumL[i+1] = sumL[i] + v[i];
        dpL[i+1] = max(dpL[i], sumL[i+1] - x[i]);
    }
    for (int i = N-1; i >= 0; i--) {
        sumR[i] = sumR[i+1] + v[i];
        dpR[i] = max(dpR[i+1], sumR[i] - (C - x[i]));
    }
    
    long long ans = max(dpL[N], dpR[0]);
    for (int i = 0; i < N-1; i++) {
        ans = max(ans, max(dpL[i+1] + dpR[i+1], sumL[i+1] - x[i] + dpR[i+1]));
    }
    cout << ans << endl;

    return 0;
}