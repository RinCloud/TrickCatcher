#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

vector<vector<int>> graph;
vector<int> color;

int ways = 0;

void count_ways(int vertex, int edge_count, int k) {
    if (vertex == 1 && edge_count > 0) {
        ways = (ways + k) % MOD;
        return;
    }
    
    for (int i = 0; i < graph[vertex].size(); i++) {
        int next_vertex = graph[vertex][i];
        int next_edge_count = (edge_count + 1) % k;
        count_ways(next_vertex, next_edge_count, k);
    }
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    graph.resize(N+1);
    color.resize(N+1);
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    
    count_ways(1, 0, K);
    
    cout << ways << endl;
    
    return 0;
}