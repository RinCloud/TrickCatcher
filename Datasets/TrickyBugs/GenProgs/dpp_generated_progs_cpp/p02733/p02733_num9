#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<int>> chocolate(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < W; j++) {
            chocolate[i][j] = row[j] - '0';
        }
    }

    int cuts = 0;
    int blocks = 1;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (chocolate[i][j] > K) {
                cout << -1 << endl;
                return 0;
            }

            blocks += chocolate[i][j];
            if (blocks > K) {
                cuts++;
                blocks = chocolate[i][j];
            }
        }
    }

    cout << cuts << endl;

    return 0;
}