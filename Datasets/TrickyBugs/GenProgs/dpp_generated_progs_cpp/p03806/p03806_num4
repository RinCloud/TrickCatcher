#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N, M_a, M_b;
    cin >> N >> M_a >> M_b;
    
    vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    
    int minCost = INT_MAX;
    for (int i = 0; i < N; i++) {
        int gcd = __gcd(M_a * a[i], M_b * b[i]);
        int multiplier_a = M_b * b[i] / gcd;
        int multiplier_b = M_a * a[i] / gcd;
        int minMultiplier = max(multiplier_a, multiplier_b);
        
        if (minMultiplier <= M_a && minMultiplier <= M_b) {
            minCost = min(minCost, minMultiplier * c[i]);
        }
    }
    
    if (minCost == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minCost << endl;
    }
    
    return 0;
}