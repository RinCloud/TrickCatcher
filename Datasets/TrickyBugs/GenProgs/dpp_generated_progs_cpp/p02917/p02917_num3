#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> B(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> B[i];
    }

    vector<int> A(N, 0);
    A[N-1] = B[N-2]; // A[N-1] = B[N-2] since A[N] doesn't exist

    for (int i = N-2; i >= 0; i--) {
        A[i] = min(B[i], B[i+1]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    cout << sum << endl;

    return 0;
}