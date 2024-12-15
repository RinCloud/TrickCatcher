#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int total_cost = 0;
    for (int i = 0; i < N - 1; i++) {
        total_cost += abs(A[i] - A[i+1]);
    }

    for (int i = 0; i < N; i++) {
        int cancel_cost;
        if (i == 0) {
            cancel_cost = total_cost - abs(A[i] - A[i+1]);
        } else if (i == N - 1) {
            cancel_cost = total_cost - abs(A[i] - A[i-1]);
        } else {
            cancel_cost = total_cost - abs(A[i] - A[i+1]) - abs(A[i] - A[i-1]) + abs(A[i-1] - A[i+1]);
        }
        cout << cancel_cost << endl;
    }

    return 0;
}