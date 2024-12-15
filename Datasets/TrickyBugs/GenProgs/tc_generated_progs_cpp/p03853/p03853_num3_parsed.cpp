#include<iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char c[h][w]; // fix: change the size of array to [h][w]
    for (int i = 0; i < h; i++) { // fix: use a loop for reading the characters
        for (int j = 0; j < w; j++) {
            cin >> c[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < w; k++) {
                cout << c[i][k];
            }
            cout << endl;
        }
    }
}
