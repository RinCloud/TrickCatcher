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

    vector<int> B(M), C(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i] >> C[i];
    }

    sort(A.begin(), A.end());

    int index = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < B[i]; j++) {
            if (C[i] <= A[index]) {
                break;
            }
            A[index] = C[i];
            index++;
        }
    }

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    cout << sum << endl;

    return 0;
}