#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    sort(H.begin(), H.end(), greater<long long>());

    long long attack_count = accumulate(H.begin() + K, H.end(), 0LL);

    cout << attack_count << endl;

    return 0;
}