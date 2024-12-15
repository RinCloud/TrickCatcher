#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> c(9);
    for (int i = 0; i < 9; i++) {
        cin >> c[i];
    }
    
    vector<int> a(3), b(3);

    a[0] = c[0] - 0;
    a[1] = c[3] - a[0];
    a[2] = c[6] - a[0];

    b[0] = c[0] - a[0];
    b[1] = c[1] - a[0];
    b[2] = c[2] - a[0];

    bool isCorrect = true;
    for (int i = 0; i < 9; i++) {
        if (c[i] != (a[i / 3] + b[i % 3])) {
            isCorrect = false;
            break;
        }
    }

    if (isCorrect) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}