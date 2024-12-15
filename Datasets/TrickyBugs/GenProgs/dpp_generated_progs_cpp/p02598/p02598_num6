#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> logs(N);
    for (int i = 0; i < N; i++) {
        cin >> logs[i];
    }
    sort(logs.begin(), logs.end(), greater<int>());

    int left = 1;
    int right = logs[0];
    while (left < right) {
        int mid = (left + right) / 2;
        int cuts = 0;
        for (int i = 0; i < N; i++) {
            cuts += ceil((double)logs[i] / mid) - 1;
        }
        if (cuts <= K) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    cout << left << endl;

    return 0;
}