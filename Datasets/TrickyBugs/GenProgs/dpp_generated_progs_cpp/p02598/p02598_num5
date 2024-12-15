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
    sort(logs.begin(), logs.end());

    int left = 0;  // shortest possible length of the longest log
    int right = logs.back();  // maximum log length

    while (left < right) {
        int mid = (left + right) / 2;  // guess the mid value
        int cuts = 0;  // count of cuts needed
        for (int i = N - 1; i >= 0; i--) {
            if (logs[i] <= mid) {
                break;
            }
            cuts += ceil(logs[i] / (double)mid) - 1;
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