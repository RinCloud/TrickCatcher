#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> c(9);
    for (int i = 0; i < 9; i++) {
        cin >> c[i];
    }

    // Sort the values of a and b in non-decreasing order
    sort(c.begin(), c.end());

    // Calculate the possible values of a and b
    vector<int> a(3), b(3);
    a[0] = c[0];
    b[0] = c[1] - a[0];
    b[1] = c[3] - a[0];
    a[1] = c[4] - b[1];
    a[2] = c[8] - b[2];
    b[2] = c[5] - a[2];

    // Check if the values of a and b satisfy the condition
    bool correct = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (c[i * 3 + j] != a[i] + b[j]) {
                correct = false;
                break;
            }
        }
    }

    // Print the result
    if (correct) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}