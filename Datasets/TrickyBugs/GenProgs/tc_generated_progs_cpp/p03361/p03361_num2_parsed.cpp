#include <iostream>
using namespace std;

int main() {
    char c[55][55];
    int h, w;
    cin >> h >> w;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> c[i][j];
        }
    }
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if(c[i][j] == '#' && !(c[i][j-1] == '#' || c[i-1][j] == '#' || c[i][j+1] == '#' || c[i+1][j] == '#')) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}