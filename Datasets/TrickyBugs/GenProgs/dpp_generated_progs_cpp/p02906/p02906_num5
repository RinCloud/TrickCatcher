#include <iostream>
#include <vector>
#include <utility>

using namespace std;

bool checkIfGraphExists(vector<vector<int>>& adjList, vector<pair<int, int>>& clues) {
    int n = adjList.size();
    
    for (auto clue : clues) {
        int a = clue.first;
        int b = clue.second;
        
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (i == a || i == b) {
                continue;
            }
            if (adjList[a][i] && adjList[i][b]) {
                cnt++;
            }
        }
        
        if (clue.second == 0 && cnt == 1) {
            return true;
        }
        if (clue.second == 1 && cnt > 1) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    
    vector<vector<int>> adjList(n, vector<int>(n, 0));
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adjList[a][b] = 1;
        adjList[b][a] = 1;
    }
    
    vector<pair<int, int>> clues;
    for (int i = 0; i < q; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        clues.push_back({a, b, c});
    }
    
    bool result = checkIfGraphExists(adjList, clues);
    
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}