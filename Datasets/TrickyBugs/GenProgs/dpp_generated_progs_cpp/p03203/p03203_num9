#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    
    vector<pair<int, int>> obstacles;
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        obstacles.push_back(make_pair(X, Y));
    }
    
    sort(obstacles.begin(), obstacles.end());
    
    int ans = H - 1;
    int prev_x = 1, prev_y = 1;
    
    for (int i = 0; i < N; i++) {
        int curr_x = obstacles[i].first;
        int curr_y = obstacles[i].second;
        
        if (curr_x == prev_x) {
            ans -= (curr_y - prev_y);
        } else {
            ans -= (curr_x - prev_x);
        }
        
        prev_x = curr_x;
        prev_y = curr_y;
    }
    
    cout << ans << endl;
    
    return 0;
}