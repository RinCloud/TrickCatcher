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

    long long sum = 0;
    long long maxElem = 0;
    for (int i = 1; i < N; i++) {
        sum += A[i];
        maxElem = max(maxElem, A[i]);
    }

    long long diff = abs(A[0] - sum);
    if (A[0] > sum && diff <= maxElem) {
        cout << diff << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}