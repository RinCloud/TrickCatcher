#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int>& balls, int K) {
    int N = balls.size();
    int maxBall = 0;
    
    for (int i = 0; i < N; i++) {
        maxBall = max(maxBall, balls[i]);
    }
    
    if (K > maxBall || K % 2 != maxBall % 2) {
        return false;
    }
    
    return true;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> balls(N);
    
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }
    
    if (isPossible(balls, K)) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}