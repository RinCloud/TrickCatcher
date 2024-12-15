#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int gcd_val = A[0];
    for (int i = 1; i < N; i++) {
        gcd_val = __gcd(gcd_val, A[i]);
    }

    if (K % gcd_val == 0 && K <= A[N - 1]) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}