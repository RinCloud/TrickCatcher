#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<unordered_set<int>> graph(N);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    vector<int> clues(Q);
    vector<pair<int, int>> queries(Q);

    for (int i = 0; i < Q; i++) {
        cin >> queries[i].first >> queries[i].second >> clues[i];
    }

    vector<int> visited(N, false);
    vector<int> component(N, 0);
    vector<int> component_size(N, 1);

    int num_components = 0;

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            num_components++;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            component[i] = num_components;

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (int neighbor : graph[node]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        component[neighbor] = num_components;
                        component_size[num_components]++;
                        q.push(neighbor);
                    }
                }
            }
        }
    }

    for (int i = 0; i < Q; i++) {
        int a = queries[i].first;
        int b = queries[i].second;
        int clue = clues[i];

        if (clue == 0) {
            if (component[a] != component[b]) {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if (component[a] == component[b] && component_size[component[a]] > 1) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}