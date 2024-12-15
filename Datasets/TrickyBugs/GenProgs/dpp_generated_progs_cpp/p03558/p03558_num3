#include <iostream>
#include <vector>

int main() {
    int K;
    std::cin >> K;

    std::vector<bool> visited(K, false);
    std::vector<int> dist(K, -1);
    std::vector<int> q;

    q.push_back(0);
    dist[0] = 0;
    visited[0] = true;

    int ans = -1;
    while (!q.empty()) {
        int v = q.front();
        q.erase(q.begin());
        if (v == 0) {
            ans = dist[v];
            break;
        }

        int v_mod = (v + 1) % K;
        if (!visited[v_mod]) {
            q.push_back(v_mod);
            dist[v_mod] = dist[v] + 1;
            visited[v_mod] = true;
        }

        int v_double = (v * 10) % K;
        if (!visited[v_double]) {
            q.push_back(v_double);
            dist[v_double] = dist[v];
            visited[v_double] = true;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}