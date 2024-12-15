#include <iostream>

using namespace std;

int main() {
    int c[3][3];

    // Read the input
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> c[i][j];
        }
    }

    // Compute the six integers
    int a[3], b[3];
    a[0] = c[0][0];
    a[1] = c[1][0];
    a[2] = c[2][0];
    b[0] = c[0][1] - a[0];
    b[1] = c[0][2] - a[0];
    b[2] = c[1][2] - a[1];

    // Check if Takahashi's statement is correct
    bool correct = true;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(c[i][j] != a[i] + b[j]) {
                correct = false;
                break;
            }
        }
    }

    // Print the result
    if(correct) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}