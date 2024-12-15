#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<long long> x(N), y(N), z(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    
    long long res = 0;
    
    for (int bit = 0; bit < (1 << N); bit++) {
        if (__builtin_popcount(bit) != M) continue;
        
        long long sumB = 0, sumT = 0, sumP = 0;
        
        for (int i = 0; i < N; i++) {
            if (bit & (1 << i)) {
                sumB += x[i];
                sumT += y[i];
                sumP += z[i];
            }
        }
        
        res = max(res, abs(sumB) + abs(sumT) + abs(sumP));
    }
    
    cout << res << endl;
    
    return 0;
}