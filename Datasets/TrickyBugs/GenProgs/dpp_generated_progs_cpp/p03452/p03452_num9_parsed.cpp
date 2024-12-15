#include <iostream>
#include <vector>

using namespace std;

bool dfs(int person, vector<vector<pair<int, int>>>& graph, vector<bool>& visited, vector<int>& position) {
    visited[person] = true;
    
    for(auto edge : graph[person]) {
        int neighbor = edge.first;
        int distance = edge.second;
        
        if(!visited[neighbor]) {
            position[neighbor] = position[person] + distance;
            if(!dfs(neighbor, graph, visited, position)) {
                return false;
            }
        }
        else {
            if(position[neighbor] != position[person] + distance) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> graph(N + 1);
    
    for(int i = 0; i < M; i++) {
        int L, R, D;
        cin >> L >> R >> D;
        graph[L].push_back(make_pair(R, D));
        graph[R].push_back(make_pair(L, -D));
    }
    
    vector<bool> visited(N + 1, false);
    vector<int> position(N + 1, 0);
    
    for(int i = 1; i <= N; i++) {
        if(!visited[i]) {
            if(!dfs(i, graph, visited, position)) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}