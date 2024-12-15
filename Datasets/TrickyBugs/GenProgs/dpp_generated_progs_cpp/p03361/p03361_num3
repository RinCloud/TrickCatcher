#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> s(H);
    for (int i = 0; i < H; i++) {
        cin >> s[i];
    }

    bool possible = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (s[i][j] == '#') {
                if ((i > 0 && s[i-1][j] == '.') || (i < H-1 && s[i+1][j] == '.') || (j > 0 && s[i][j-1] == '.') || (j < W-1 && s[i][j+1] == '.')) {
                    possible = false;
                    break;
                }
            }
        }
        if (!possible) {
            break;
        }
    }

    if (possible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}