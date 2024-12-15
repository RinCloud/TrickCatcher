#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool dfs(int curr, int target, const vector<set<int>>& adjList, vector<bool>& visited) {
    if (curr == target) {
        return true;
    }
    
    visited[curr] = true;
    
    for (int next : adjList[curr]) {
        if (!visited[next]) {
            if (dfs(next, target, adjList, visited)) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    
    vector<set<int>> adjList(N);
    vector<pair<int, int>> clues;
    for (int i = 0; i < Q; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        clues.push_back({a, b});
        if (c == 0) {
            adjList[a].insert(b);
            adjList[b].insert(a);
        }
    }
    
    int answer = 0;
    for (int i = 0; i < Q; i++) {
        vector<bool> visited(N, false);
        int a = clues[i].first;
        int b = clues[i].second;
        
        adjList[a].erase(b);
        adjList[b].erase(a);
        
        if (!dfs(a, b, adjList, visited)) {
            answer++;
        }
        
        adjList[a].insert(b);
        adjList[b].insert(a);
    }
    
    if (answer == Q) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}