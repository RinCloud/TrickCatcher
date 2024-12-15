#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        P[i] = i+1;
    }

    long long ans = 0;
    do {
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            sum += i % P[i];
        }
        ans = max(ans, sum);
    } while (next_permutation(P.begin(), P.end()));

    cout << ans << endl;

    return 0;
}
