#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& balls, int K) {
    sort(balls.begin(), balls.end());
    
    for (int i = 0; i < balls.size(); i++) {
        if (balls[i] == K) {
            return true;
        }
        if (balls[i] > K) {
            break;
        }
        K -= balls[i];
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
        cout << "POSSIBLE";
    } else {
        cout << "IMPOSSIBLE";
    }
    
    return 0;
}