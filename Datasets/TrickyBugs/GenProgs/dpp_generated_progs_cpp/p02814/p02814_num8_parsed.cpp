#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int countSemiCommonMultiples(vector<int> A, int M) {
    int n = A.size();
    long long lcmValue = 1;
    for (int i = 0; i < n; i++) {
        lcmValue = lcm(lcmValue, A[i]);
        if (lcmValue > M) {
            return 0;
        }
    }
    int count = 0;
    for (long long i = lcmValue; i <= M; i += lcmValue) {
        if ((i % 2) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int result = countSemiCommonMultiples(A, M);
    cout << result << endl;
    return 0;
}