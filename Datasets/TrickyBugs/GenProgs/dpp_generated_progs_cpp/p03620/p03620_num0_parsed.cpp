#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countOperations(string A, string B) {
    int n = A.length();
    int operations = 0;

    vector<int> flips(n, 0);
    int flipCount = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            flips[i] = 1;
            flipCount++;
        }
    }

    if (flipCount == 0) {
        return operations;
    }

    if (flipCount > n - flipCount) {
        for (int i = 0; i < n; i++) {
            if (B[i] == '1') {
                if (flips[i] == 0) {
                    operations++;
                }
                flips[i] = 1;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (B[i] == '0') {
                if (flips[i] == 0) {
                    operations++;
                }
                flips[i] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            if (B[(i + 1) % n] != B[i]) {
                return -1;
            }
            operations++;
        }
    }

    return operations;
}

int main() {
    string A, B;
    cin >> A >> B;

    cout << countOperations(A, B) << endl;

    return 0;
}