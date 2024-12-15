#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> graph;
vector<bool> visited;
vector<int> posX;

bool dfs(int node, int pos)
{
    visited[node] = true;

    posX[node] = pos;

    for (auto it : graph[node])
    {
        int neighbor = it.first;
        int dist = it.second;

        if (!visited[neighbor])
        {
            if (!dfs(neighbor, pos + dist))
                return false;
        }
        else
        {
            if (posX[node] - posX[neighbor] != dist)
                return false;
        }
    }

    return true;
}

int main()
{
    int N, M;
    cin >> N >> M;

    graph.resize(N);
    visited.resize(N);
    posX.resize(N);

    for (int i = 0; i < M; ++i)
    {
        int L, R, D;
        cin >> L >> R >> D;
        --L;
        --R;

        graph[L].push_back({R, D});
        graph[R].push_back({L, -D});
    }

    for (int i = 0; i < N; ++i)
    {
        if (!visited[i])
        {
            if (!dfs(i, 0))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}