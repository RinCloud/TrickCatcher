#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    long long ans = 0;
    // Case 1: No 0's in the sequence
    if (D != 0) {
        long long sum = 0;
        map<int, long long> count;

        for (int i = 0; i < N; i++) {
            sum += X + i * D;
            count[sum]++;
        }

        for (auto p : count) {
            long long c = p.second;
            ans += c * (c - 1) / 2;
        }
    }
    
    // Case 2: There are 0's in the sequence
    long long zeros = 0;
    if (D == 0) {
        if (X == 0) {
            ans = 1;
            zeros = 1;
        } else {
            ans = N;
        }
    } else {
        long long k = 0;
        if (X < 0) {
            k = (-X) / D;
            X += k * D;
        }

        zeros = min(N + 1, (-X - 1) / D + 1);
        ans += zeros * (N - zeros + 1);
        ans += (N - zeros + 1) * (N - zeros) / 2 * k;
    }

    cout << ans << endl;

    return 0;
}