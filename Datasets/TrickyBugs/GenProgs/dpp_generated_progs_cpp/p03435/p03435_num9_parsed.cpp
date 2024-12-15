#include <iostream>
using namespace std;

int main() {
    // Taking input from the user
    int c[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }

    // Finding the values of a1, a2, a3, b1, b2, b3
    int a[3], b[3];
    a[0] = c[0][0];
    a[1] = c[0][1] - a[0];
    a[2] = c[0][2] - a[0];
    b[0] = c[0][0];
    b[1] = c[1][0] - b[0];
    b[2] = c[2][0] - b[0];

    // Checking if Takahashi's statement is correct
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

    // Printing the result
    if (correct) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}