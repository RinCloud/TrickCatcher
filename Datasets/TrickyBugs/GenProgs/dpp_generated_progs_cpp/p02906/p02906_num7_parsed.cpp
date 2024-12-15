#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool checkGraph(int N, vector<pair<int, int>>& edges, vector<pair<int, int>>& clues) {
    vector<unordered_set<int>> adjList(N);
    
    for (auto& edge : edges) {
        adjList[edge.first].insert(edge.second);
        adjList[edge.second].insert(edge.first);
    }
    
    for (auto& clue : clues) {
        int A = clue.first;
        int B = clue.second;
        int C = clue.second;
        
        if (C == 0) {
            if (adjList[A].count(B) == 0) {
                return false;
            }
        } else {
            if (adjList[A].count(B) != 0) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    
    vector<pair<int, int>> edges(M);
    for (int i = 0; i < M; i++) {
        cin >> edges[i].first >> edges[i].second;
    }
    
    vector<pair<int, int>> clues(Q);
    for (int i = 0; i < Q; i++) {
        cin >> clues[i].first >> clues[i].second >> clues[i].second;
    }
    
    bool possible = checkGraph(N, edges, clues);
    
    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}