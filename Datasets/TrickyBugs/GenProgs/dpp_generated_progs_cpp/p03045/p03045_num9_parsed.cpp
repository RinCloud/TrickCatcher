#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N + 1, 0);
    vector<vector<int>> adjacent(N + 1);
    vector<bool> visited(N + 1, false);

    for (int i = 1; i <= M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        adjacent[X].push_back(Y);
        adjacent[Y].push_back(X);

        A[X] = Z % 2;
        A[Y] = Z % 2;
    }

    int cost = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            int cnt_odd = 0, cnt_even = 0;

            vector<int> q;
            q.push_back(i);
            visited[i] = true;

            while (!q.empty()) {
                int u = q.back();
                q.pop_back();

                if (A[u] == 1) {
                    cnt_odd++;
                } else {
                    cnt_even++;
                }

                for (int v : adjacent[u]) {
                    if (!visited[v]) {
                        visited[v] = true;
                        A[v] = (A[u] + 1) % 2;
                        q.push_back(v);
                    }
                }
            }

            cost += min(cnt_odd, cnt_even);
        }
    }

    cout << cost << endl;

    return 0;
}