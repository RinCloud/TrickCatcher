#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    --a; --b;
    
    vector<pii> pinholes;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pinholes.push_back(make_pair(x, y));
    }

    int max_distance = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int distance = max(abs(pinholes[i].first - pinholes[j].first), abs(pinholes[i].second - pinholes[j].second));
            max_distance = max(max_distance, distance);
        }
    }

    vector<vector<int>> graph(n);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int distance = max(abs(pinholes[i].first - pinholes[j].first), abs(pinholes[i].second - pinholes[j].second));
            if (distance == max_distance) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    vector<int> distance(n, -1);
    distance[a] = 0;
    queue<int> q;
    q.push(a);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        if (x == b) break;
        for (int y : graph[x]) {
            if (distance[y] == -1) {
                distance[y] = distance[x] + 1;
                q.push(y);
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (distance[i] <= distance[b] && distance[i] != -1) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}