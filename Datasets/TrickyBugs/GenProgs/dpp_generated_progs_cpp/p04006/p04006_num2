#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int minTime = 0;
    for (int i = 0; i < N - 1; i++) {
        if (a[i] + a[i + 1] > x) {
            int diff = a[i] + a[i + 1] - x;
            minTime += diff;
            a[i + 1] = max(0, a[i + 1] - diff);
        }
    }

    cout << minTime << endl;

    return 0;
}