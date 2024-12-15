#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;

struct Room {
    int i, j;
    int cast;
    Room(int i, int j, int cast): i(i), j(j), cast(cast) {}
};

int minCasts(vector<vector<char>>& building, int h, int w, int k) {
    int startX, startY;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (building[i][j] == 'S') {
                startX = i;
                startY = j;
                break;
            }
        }
    }

    vector<vector<int>> dist(h, vector<int>(w, INF));
    vector<vector<bool>> unlocked(h, vector<bool>(w, false));

    queue<Room> q;
    q.push(Room(startX, startY, 0));
    dist[startX][startY] = 0;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while (!q.empty()) {
        Room curr = q.front();
        q.pop();

        int x = curr.i;
        int y = curr.j;
        int casts = curr.cast;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j <= k; j++) {
                int newX = x + dx[i] * j;
                int newY = y + dy[i] * j;

                if (newX < 0 || newX >= h || newY < 0 || newY >= w)
                    continue;

                if (building[newX][newY] == '#')
                    break;

                if (dist[newX][newY] <= casts)
                    continue;

                dist[newX][newY] = casts;
                q.push(Room(newX, newY, casts));
            }
        }

        if (!unlocked[x][y] && casts < k) {
            unlocked[x][y] = true;
            for (int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];

                if (newX < 0 || newX >= h || newY < 0 || newY >= w)
                    continue;

                if (dist[newX][newY] <= casts + 1)
                    continue;

                dist[newX][newY] = casts + 1;
                q.push(Room(newX, newY, casts + 1));
            }
        }
    }

    int minCasts = INF;
    for (int i = 0; i < h; i++) {
        if (dist[i][0] != INF)
            minCasts = min(minCasts, dist[i][0]);

        if (dist[i][w-1] != INF)
            minCasts = min(minCasts, dist[i][w-1]);
    }

    for (int i = 0; i < w; i++) {
        if (dist[0][i] != INF)
            minCasts = min(minCasts, dist[0][i]);

        if (dist[h-1][i] != INF)
            minCasts = min(minCasts, dist[h-1][i]);
    }

    return minCasts == INF ? -1 : minCasts;
}

int main() {
    int h, w, k;
    cin >> h >> w >> k;

    vector<vector<char>> building(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> building[i][j];
        }
    }

    int result = minCasts(building, h, w, k);
    cout << result << endl;

    return 0;
}