#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> costs(N);
    int total_cost = 0;
    for (int i = 0; i < N; i++) {
        total_cost += abs(A[i]);
    }

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            costs[i] = total_cost - abs(A[0]) - abs(A[1] - A[0]);
        } else if (i == N - 1) {
            costs[i] = total_cost - abs(A[N - 1]) - abs(A[N - 1] - A[N - 2]);
        } else {
            costs[i] = total_cost - abs(A[i]) - abs(A[i] - A[i - 1]) - abs(A[i + 1] - A[i]);
        }
        cout << costs[i] << endl;
    }

    return 0;
}