#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> board(H);
    for (int i = 0; i < H; i++) {
        cin >> board[i];
    }
    
    vector<vector<int>> black(H, vector<int>(W));
    vector<int> row(H), column(W);
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (board[i][j] == '#') {
                row[i]++;
                column[j]++;
                black[i][j] = 1;
            }
        }
    }
    
    int max_area = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int area = row[i] + column[j] - black[i][j];
            max_area = max(max_area, area);
        }
    }
    
    cout << max_area << endl;
    return 0;
}