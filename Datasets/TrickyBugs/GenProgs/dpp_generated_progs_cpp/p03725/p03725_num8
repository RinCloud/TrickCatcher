#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int H, W, K;
vector<vector<char>> building;
vector<vector<int>> dist;
queue<pair<int, int>> q;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y)
{
    return x >= 0 && x < H && y >= 0 && y < W;
}

int bfs()
{
    // Starting position
    int startX, startY;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (building[i][j] == 'S')
            {
                startX = i;
                startY = j;
            }
        }
    }

    dist[startX][startY] = 0;
    q.push({startX, startY});

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // Check if visited all exit rooms
        if (x == 0 || x == H - 1 || y == 0 || y == W - 1)
        {
            return dist[x][y];
        }

        // BFS through adjacent rooms
        for (int i = 0; i < 4; i++)
        {
            for (int k = 0; k <= K; k++)
            {
                int newX = x + dx[i] * k;
                int newY = y + dy[i] * k;

                if (isValid(newX, newY) && building[newX][newY] != '#' && dist[newX][newY] == -1)
                {
                    dist[newX][newY] = dist[x][y] + 1;
                    q.push({newX, newY});
                }
                else
                {
                    break;
                }
            }
        }
    }

    return -1; // Failed to find exit room
}

int main()
{
    cin >> H >> W >> K;
    building.resize(H, vector<char>(W));
    dist.resize(H, vector<int>(W, -1));

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> building[i][j];
        }
    }

    int minCasts = bfs();
    cout << minCasts << endl;

    return 0;
}