#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    vector<bool> smashed(N + 1, false);
    long long totalYen = 0;

    for (int i = N; i >= 1; --i) {
        if (!smashed[i]) {
            for (int j = 2 * i; j <= N; j += i) {
                smashed[j] = true;
            }
            totalYen += a[i - 1];
        }
    }

    cout << totalYen << endl;

    return 0;
}