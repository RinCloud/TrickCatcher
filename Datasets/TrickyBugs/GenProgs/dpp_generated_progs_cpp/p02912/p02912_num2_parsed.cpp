#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<int>());

    for (int i = 0; i < M; i++) {
        A[i] /= 2;
    }

    long long total_cost = 0;
    for (int i = 0; i < N; i++) {
        total_cost += A[i];
    }

    cout << total_cost << endl;

    return 0;
}