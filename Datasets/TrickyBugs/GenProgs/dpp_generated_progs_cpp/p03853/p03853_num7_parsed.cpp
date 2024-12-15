#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<vector<char>> image(H, vector<char>(W));
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> image[i][j];
        }
    }
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << image[i][j] << endl;
        }
        for (int j = 0; j < W; j++) {
            cout << image[i][j] << endl;
        }
    }
    
    return 0;
}