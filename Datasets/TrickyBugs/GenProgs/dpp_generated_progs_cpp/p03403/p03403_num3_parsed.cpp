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

    vector<int> costs;

    int total_cost = 0;
    for (int i = 1; i < N; i++) {
        total_cost += abs(A[i] - A[i - 1]);
    }
    total_cost += abs(A[N - 1]);
    costs.push_back(total_cost);

    for (int i = 1; i < N - 1; i++) {
        int diff = abs(A[i + 1] - A[i - 1]);
        int reduced_cost = total_cost - abs(A[i] - A[i - 1]) - abs(A[i + 1] - A[i]) + diff;
        costs.push_back(reduced_cost);
    }

    total_cost -= abs(A[N - 2]);
    costs.push_back(total_cost);

    for (int cost : costs) {
        cout << cost << endl;
    }

    return 0;
}