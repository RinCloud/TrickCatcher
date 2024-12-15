#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<long long>());

    long long totalPoints = 0;
    for (int i = 0; i < N; ++i) {
        totalPoints += A[i] * (i % 2 == 0 ? 1 : -1);
    }

    cout << totalPoints << endl;

    return 0;
}