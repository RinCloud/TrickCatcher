#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    while (N >= K) {
        if (abs(N - K) < N) {
            N = abs(N - K);
        } else {
            N = N % K;
        }
    }

    cout << N;

    return 0;
}