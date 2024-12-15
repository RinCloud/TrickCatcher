#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    
    vector<pair<int, int>> obstacles(N);
    for (int i = 0; i < N; i++) {
        cin >> obstacles[i].first >> obstacles[i].second;
    }
    
    sort(obstacles.begin(), obstacles.end());
    
    int max_x = 0;
    int max_y = 0;
    int actions = 0;
    
    for (int i = 0; i < N; i++) {
        int x = obstacles[i].first;
        int y = obstacles[i].second;
        
        int dx = x - max_x;
        int dy = y - max_y;
        
        actions += max(dx, dy);
        
        max_x = x;
        max_y = y;
    }
    
    int dx = H - max_x;
    int dy = W - max_y;
    actions += max(dx, dy);
    
    cout << actions << endl;
    
    return 0;
}