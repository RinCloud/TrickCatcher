#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> cost(N);
    cost[0] = 0;
    for (int i = 1; i < N; i++) {
        cost[i] = cost[i-1] + abs(A[i] - A[i-1]);
    }
    cost[N-1] += abs(A[N-1] - A[0]);

    for (int i = 0; i < N; i++) {
        long long total_cost = cost[N-1] - abs(A[i] - A[(i-1+N) % N]) - abs(A[i] - A[(i+1) % N]);
        cout << total_cost << endl;
    }

    return 0;
}