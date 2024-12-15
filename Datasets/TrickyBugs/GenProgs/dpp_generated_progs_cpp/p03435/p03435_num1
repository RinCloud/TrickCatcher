#include <iostream>
using namespace std;

int main() {
    int c[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }

    int a[3], b[3];
    for (int i = 0; i < 3; i++) {
        a[i] = c[i][0] - c[0][0];
        b[i] = c[0][i] - a[0];
    }

    bool correct = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (c[i][j] != a[i] + b[j]) {
                correct = false;
                break;
            }
        }
        if (!correct) {
            break;
        }
    }

    if (correct) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}