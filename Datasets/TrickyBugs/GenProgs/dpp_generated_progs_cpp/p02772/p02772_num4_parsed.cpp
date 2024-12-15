#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool allowed = true;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0 && !(A[i] % 3 == 0 || A[i] % 5 == 0)) {
            allowed = false;
            break;
        }
    }

    if (allowed) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }

    return 0;
}