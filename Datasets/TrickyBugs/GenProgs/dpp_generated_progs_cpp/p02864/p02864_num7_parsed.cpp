#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    long long operations = 0;
    for (int i = 0; i < N; i++) {
        if (i < K) {
            operations += H[i];
        } else {
            operations += max(0LL, H[i] - H[i - K]);
        }
    }

    cout << operations << endl;

    return 0;
}