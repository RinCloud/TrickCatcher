#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;
    
    int p = min({Q * 4, H * 2, S}); // price of 0.25 liter
    
    long long ans = 0;
    if (N >= 2) {
        long long bundlePrice = min(p * 2, D); // price of 2 liter
        ans += (N / 2) * bundlePrice;
        N %= 2;
    }
    
    if (N == 1) {
        ans += p;
    }
    
    cout << ans << endl;
    
    return 0;
}