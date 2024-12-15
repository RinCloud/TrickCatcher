#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int maxCount = 0;
    for (int X = 0; X <= 100000; X++) {
        int count = 0;
        for (int i = 0; i < N; i++) {
            int diff = abs(a[i] - X);
            if (diff <= 1) {
                count++;
            }
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;

    return 0;
}