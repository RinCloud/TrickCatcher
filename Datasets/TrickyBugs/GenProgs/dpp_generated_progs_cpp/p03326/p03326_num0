#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> beauty(N), tastiness(N), popularity(N);
    for (int i = 0; i < N; i++) {
        cin >> beauty[i] >> tastiness[i] >> popularity[i];
    }

    long long ans = 0;
    for (int mask = 0; mask < (1 << N); mask++) {
        if (__builtin_popcount(mask) != M) {
            continue;
        }

        vector<int> total(3);
        for (int i = 0; i < N; i++) {
            if ((mask >> i) & 1) {
                total[0] += beauty[i];
                total[1] += tastiness[i];
                total[2] += popularity[i];
            }
        }

        long long sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += abs(total[i]);
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}