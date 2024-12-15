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

    // Sort the logs in descending order
    sort(logs.begin(), logs.end(), greater<int>());

    // Calculate the maximum possible length of the longest log after cutting
    int left = 0, right = logs[0];
    while (left < right) {
        int middle = (left + right) / 2;

        // Count the number of cuts needed to make all logs shorter than or equal to middle
        int count = 0;
        for (int i = 1; i < N; i++) {
            count += ceil((double)logs[i] / middle) - 1;
        }

        if (count <= K) {
            right = middle;
        } else {
            left = middle + 1;
        }
    }

    cout << left << endl;

    return 0;
}