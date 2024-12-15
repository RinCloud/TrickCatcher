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
    
    int totalDistance = 0;
    for (int i = 0; i < N; i++) {
        int distanceA = abs(balls[i] - 0);
        int distanceB = abs(balls[i] - K);
        totalDistance += min(distanceA, distanceB) + K;
    }
    
    cout << totalDistance << endl;
    
    return 0;
}