#include <iostream>
#include <vector>
#include <limits>

const int INF = std::numeric_limits<int>::max();

void dfs(int current, int N, const std::vector<std::vector<int>>& adj_matrix, std::vector<bool>& visited) {
    visited[current] = true;
    for (int i = 0; i < N; ++i) {
        if (!visited[i] && adj_matrix[current][i] != 0) {
            dfs(i, N, adj_matrix, visited);
        }
    }
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> adj_matrix(N, std::vector<int>(N, 0));
    for (int i = 0; i < M; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;
        adj_matrix[a - 1][b - 1] = c;
        adj_matrix[b - 1][a - 1] = c;
    }

    std::vector<bool> visited(N, false);
    visited[0] = true;

    std::vector<int> remove_cost(N, INF);
    remove_cost[0] = 0;

    int total_cost = 0;

    while (true) {
        int min_cost_vertex = -1;
        for (int i = 0; i < N; ++i) {
            if (!visited[i] && remove_cost[i] < INF) {
                if (min_cost_vertex == -1 || remove_cost[i] < remove_cost[min_cost_vertex]) {
                    min_cost_vertex = i;
                }
            }
        }

        if (min_cost_vertex == -1) {
            break;
        }

        visited[min_cost_vertex] = true;
        total_cost += remove_cost[min_cost_vertex];

        for (int i = 0; i < N; ++i) {
            if (!visited[i] && adj_matrix[min_cost_vertex][i] != 0 && adj_matrix[min_cost_vertex][i] < remove_cost[i]) {
                remove_cost[i] = adj_matrix[min_cost_vertex][i];
            }
        }
    }

    std::cout << total_cost << std::endl;

    return 0;
}