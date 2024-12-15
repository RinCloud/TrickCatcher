#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long total = 0;
    for (int i = 1; i < N; i++) {
        total += A[i];
    }

    if (A[0] <= total && total <= 2 * A[0]) {
        cout << total - A[0] + 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}