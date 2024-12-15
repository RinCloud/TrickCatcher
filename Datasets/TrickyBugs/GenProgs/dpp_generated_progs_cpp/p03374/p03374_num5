#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    
    vector<int> x(N), v(N);
    for(int i=0; i<N; i++) {
        cin >> x[i] >> v[i];
    }
    
    vector<long long> cumSum1(N+1), cumSum2(N+1);
    for(int i=1; i<=N; i++) {
        cumSum1[i] = cumSum1[i-1] + v[i-1];
        cumSum2[i] = cumSum2[i-1] + (v[i-1] - (x[i-1]-x[i-2]));
    }
    
    long long ans = 0;
    for(int i=1; i<=N; i++) {
        long long energy = cumSum1[N] - cumSum1[i];
        long long dist = cumSum2[N] - cumSum2[i];
        ans = max(ans, energy - max(0LL, dist - (C-x[i-1])));
    }
    
    for(int i=N; i>=1; i--) {
        long long energy = cumSum1[N] - cumSum1[N-i];
        long long dist = cumSum2[N] - cumSum2[N-i];
        ans = max(ans, energy - max(0LL, dist - x[i-1]));
    }
    
    cout << ans << endl;
    
    return 0;
}