#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

void dfs(const std::vector<std::vector<int>>& graph, std::vector<int>& colors, int vertex, std::vector<bool>& visited) {
    visited[vertex] = true;
    
    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            colors[neighbor] = colors[vertex] - 1;
            if (colors[neighbor] < 0) {
                colors[neighbor] += colors.size();
            }
            dfs(graph, colors, neighbor, visited);
        }
    }
}

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;
    
    std::vector<std::vector<int>> graph(N);
    
    for (int i = 0; i < M; ++i) {
        int a, b;
        std::cin >> a >> b;
        --a;
        --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    std::vector<int> colors(N, 0);
    std::vector<bool> visited(N, false);
    
    int count = 0;
    
    for (int i = 0; i < N; ++i) {
        if (!visited[i]) {
            colors[i] = K - 1;
            dfs(graph, colors, i, visited);
            ++count;
        }
    }
    
    long long result = 1;
    
    for (int i = 0; i < count; ++i) {
        result = (result * K) % MOD;
    }
    
    std::cout << result << std::endl;
    
    return 0;
}