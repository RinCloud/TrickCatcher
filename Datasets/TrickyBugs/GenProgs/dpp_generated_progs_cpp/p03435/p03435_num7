#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> c(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }
    
    int a1 = c[0][0] - c[0][1];
    int a2 = c[1][0] - c[1][1];
    int a3 = c[2][0] - c[2][1];
    int b1 = c[0][0] - c[1][0];
    int b2 = c[0][1] - c[1][1];
    int b3 = c[0][2] - c[1][2];
    
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