#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

vector<vector<int>> createGraph(int N, int X, int Y) {
    vector<vector<int>> graph(N + 1);
    
    for (int i = 1; i < N; i++) {
        graph[i].push_back(i + 1);
        graph[i + 1].push_back(i);
    }
    
    graph[X].push_back(Y);
    graph[Y].push_back(X);
    
    return graph;
}

vector<int> shortestDistances(vector<vector<int>>& graph, int N, int start) {
    vector<int> distances(N + 1, numeric_limits<int>::max());
    distances[start] = 0;
    
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        
        for (int neighbor : graph[current]) {
            if (distances[neighbor] == numeric_limits<int>::max()) {
                distances[neighbor] = distances[current] + 1;
                q.push(neighbor);
            }
        }
    }
    
    return distances;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    vector<vector<int>> graph = createGraph(N, X, Y);
    
    for (int k = 1; k < N; k++) {
        vector<int> distances = shortestDistances(graph, N, k);
        int count = 0;
        
        for (int i = 1; i <= N; i++) {
            for (int j = i + 1; j <= N; j++) {
                if (distances[i] + distances[j] == k) {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}