#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int>& balls, int K) {
    int N = balls.size();
    int maxNum = *max_element(balls.begin(), balls.end());
    
    if (K > maxNum) {
        return false;
    }
    
    if (K == maxNum) {
        return true;
    }
    
    int gcd = balls[0];
    for (int i = 1; i < N; i++) {
        gcd = __gcd(gcd, balls[i]);
    }
    
    if (K % gcd == 0) {
        return true;
    }
    
    return false;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }
    
    if (isPossible(balls, K)) {
        cout << "POSSIBLE\n";
    } else {
        cout << "IMPOSSIBLE\n";
    }
    
    return 0;
}