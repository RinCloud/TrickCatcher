#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long lcmm = A[0];
    for (int i = 1; i < N; i++) {
        lcmm = lcm(lcmm, A[i]);
    }

    long long count = M / lcmm;

    cout << count << endl;

    return 0;
}