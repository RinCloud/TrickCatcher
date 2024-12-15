#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int A[100005];
    long long sum = 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        sum += abs(A[i] - A[i-1]);
    }

    for (int i = 1; i <= N; i++) {
        long long ans = sum - abs(A[i] - A[i-1]) - abs(A[i] - A[i+1]) + abs(A[i-1] - A[i+1]);
        cout << ans << endl;
    }
    return 0;
}