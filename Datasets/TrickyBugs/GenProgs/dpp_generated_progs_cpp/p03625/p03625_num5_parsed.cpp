#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> sticks(N);
    for (int i = 0; i < N; i++) {
        cin >> sticks[i];
    }

    sort(sticks.rbegin(), sticks.rend());

    long long maxArea = 0;

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (sticks[i] == sticks[j] && sticks[j] == sticks[k]) {
                    maxArea = max(maxArea, (long long)sticks[i] * sticks[j]);
                } else if (sticks[i] == sticks[j] && sticks[j] != sticks[k]) {
                    maxArea = max(maxArea, (long long)sticks[i] * sticks[k]);
                } else if (sticks[i] != sticks[j] && sticks[j] == sticks[k]) {
                    maxArea = max(maxArea, (long long)sticks[j] * sticks[k]);
                }
            }
        }
    }

    cout << maxArea << endl;

    return 0;
}