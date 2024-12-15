#include <iostream>
#include <vector>
using namespace std;

int cutsNeeded(int H, int W, int K, vector<vector<int>>& squares) {
    int numOfCuts = 0;
    int blocks = 0;
    
    for (int i = 0; i < H; i++) {
        int whiteSquares = 0;
        
        for (int j = 0; j < W; j++) {
            whiteSquares += squares[i][j];
        }
        
        if (whiteSquares + blocks <= K) {
            continue;
        } else if (whiteSquares > K) {
            return -1;
        } else {
            numOfCuts++;
            blocks = 0;
        }
        
        for (int j = 0; j < W; j++) {
            blocks += squares[i][j];
            
            if (blocks > K) {
                numOfCuts++;
                blocks = squares[i][j];
            }
        }
    }
    
    return numOfCuts;
}

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<int>> squares(H, vector<int>(W));
    
    for (int i = 0; i < H; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < W; j++) {
            squares[i][j] = row[j] - '0';
        }
    }
    
    int result = cutsNeeded(H, W, K, squares);
    cout << result << endl;
    
    return 0;
}