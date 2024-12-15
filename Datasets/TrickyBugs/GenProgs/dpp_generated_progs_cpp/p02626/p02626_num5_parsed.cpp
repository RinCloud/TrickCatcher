#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for(int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    
    ll sum = 0;
    ll xorSum = 0;
    ll max = -1;
    for(int i=0; i<n; i++) {
        sum += a[i];
        xorSum ^= a[i];
        max = std::max(max, a[i]);
    }
    
    if (xorSum == 0) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << (sum-xorSum) << std::endl;
    }
    return 0;
}