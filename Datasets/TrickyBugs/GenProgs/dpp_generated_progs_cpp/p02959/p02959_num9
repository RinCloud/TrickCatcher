#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int defeated = min(A[i], B[i]);
        ans += defeated;

        int remaining = A[i] - defeated;
        int max_defeated = min(A[i + 1], B[i] - defeated);
        ans += max_defeated;

        A[i + 1] -= max_defeated;
    }

    cout << ans << endl;
    return 0;
}