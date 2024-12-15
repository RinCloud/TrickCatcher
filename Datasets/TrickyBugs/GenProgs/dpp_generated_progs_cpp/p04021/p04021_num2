#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int min_operations = 0;

    for (int i = N - 1; i > 0; i--) {
        if (A[i] < A[i-1]) {
            min_operations++;
        } else {
            break;
        }
    }

    cout << min_operations << endl;

    return 0;
}