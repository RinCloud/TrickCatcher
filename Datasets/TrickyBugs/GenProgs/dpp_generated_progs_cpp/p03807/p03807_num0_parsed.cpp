#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool possible = true;
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    if (countEven == N || countOdd == N) {
        possible = false;
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}