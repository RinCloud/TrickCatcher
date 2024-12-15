#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    unordered_set<int> obstacles;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        obstacles.insert((x-1) * W + y);
    }

    vector<int> dx = {1, 0};
    vector<int> dy = {0, 1};

    int ans = 0;
    int curX = 1, curY = 1;
    while (true) {
        bool found = false;
        for (int d = 0; d < 2; d++) {
            int nextX = curX + dx[d];
            int nextY = curY + dy[d];
            if (nextX > H || nextY > W || obstacles.count((nextX-1) * W + nextY))
                continue;
            curX = nextX;
            curY = nextY;
            ans++;
            found = true;
            break;
        }
        if (!found)
            break;
    }
    
    cout << ans << endl;

    return 0;
}