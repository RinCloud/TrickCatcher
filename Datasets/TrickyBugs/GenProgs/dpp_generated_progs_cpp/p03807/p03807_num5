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

    int numEven = 0;
    int numOdd = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            numEven++;
        } else {
            numOdd++;
        }
    }

    if (numEven % 2 == 0 || numOdd % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}