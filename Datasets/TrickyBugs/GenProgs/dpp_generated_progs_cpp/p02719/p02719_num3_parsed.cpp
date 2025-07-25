#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long min_value = N;
    while (true) {
        long long abs_diff = abs(N - (N / K) * K);
        if (abs_diff >= N) {
            break;
        }
        N = abs_diff;
        min_value = min(N, min_value);
    }

    cout << min_value << endl;

    return 0;
}
