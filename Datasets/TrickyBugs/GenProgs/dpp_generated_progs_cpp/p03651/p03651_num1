#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }
    
    sort(balls.begin(), balls.end());
    
    int gcd = balls[0];
    for (int i = 1; i < N; i++) {
        gcd = __gcd(gcd, balls[i]);
    }
    
    if (K % gcd == 0 && K <= balls[N-1]) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}