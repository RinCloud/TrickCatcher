#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> canvas(H);
    for (int i = 0; i < H; i++) {
        cin >> canvas[i];
    }

    bool possible = true;
    for (int i = 1; i < H-1; i++) {
        for (int j = 1; j < W-1; j++) {
            if (canvas[i][j] == '#') {
                if (canvas[i-1][j] == '.' && canvas[i+1][j] == '.' && canvas[i][j-1] == '.' && canvas[i][j+1] == '.') {
                    possible = false;
                    break;
                }
            }
        }
    }

    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}