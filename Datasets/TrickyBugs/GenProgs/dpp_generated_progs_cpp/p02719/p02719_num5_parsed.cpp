#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    while (N >= K) {
        N = abs(N - K);
    }
    
    cout << N;
    
    return 0;
}