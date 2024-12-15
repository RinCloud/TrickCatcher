#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;
    
    vector<int> rowTargets(H+1, 0);
    vector<int> colTargets(W+1, 0);
    vector<pair<int, int>> targets;
    
    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        rowTargets[h]++;
        colTargets[w]++;
        targets.push_back(make_pair(h, w));
    }
    
    // find the row and column with most targets
    int maxRowTargets = 0, maxColTargets = 0;
    
    for (int i = 1; i <= H; i++) {
        maxRowTargets = max(maxRowTargets, rowTargets[i]);
    }
    
    for (int i = 1; i <= W; i++) {
        maxColTargets = max(maxColTargets, colTargets[i]);
    }
    
    // find the number of squares with most targets
    int maxSquares = 0;
    
    for (int i = 1; i <= H; i++) {
        if (rowTargets[i] == maxRowTargets) {
            maxSquares++;
        }
    }
    
    for (int i = 1; i <= W; i++) {
        if (colTargets[i] == maxColTargets) {
            maxSquares++;
        }
    }
    
    // check if any target is in both the row and column with most targets
    for (int i = 0; i < M; i++) {
        int h = targets[i].first;
        int w = targets[i].second;
        
        if (rowTargets[h] == maxRowTargets && colTargets[w] == maxColTargets) {
            maxSquares--;
        }
    }
    
    cout << maxSquares << endl;
    
    return 0;
}