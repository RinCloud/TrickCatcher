#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int min_ops = 0;
    for (int i = 0; i < N - 1; i++) {
        if (A[i] != A[N - 1]) {
            min_ops++;
        }
    }

    int additional_ops = (min_ops + K - 2) / (K - 1);

    cout << additional_ops << endl;

    return 0;
}