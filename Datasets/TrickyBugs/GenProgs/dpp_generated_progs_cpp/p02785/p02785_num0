#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main() {
    int N, K;
    std::cin >> N >> K;
    std::vector<ll> H(N);
    for (int i = 0; i < N; i++) {
        std::cin >> H[i];
    }
  
    std::sort(H.begin(), H.end(), std::greater<ll>());
  
    ll count = 0;
    for (int i = K; i < N; i++) {
        count += H[i];
    }
  
    std::cout << count << "\n";

    return 0;
}