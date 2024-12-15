#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(3*N);
    for (int i = 0; i < 3*N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    int points = 0;

    // Perform N-1 operations
    for (int i = N; i < 3*N; i += 2) {
        if (A[i] == A[i-1] && A[i] == A[i-2]) {
            points++;
        }
    }

    // Check the remaining three cards
    if (A[3*N-1] == A[3*N-2] && A[3*N-1] == A[3*N-3]) {
        points++;
    }

    cout << points << endl;

    return 0;
}