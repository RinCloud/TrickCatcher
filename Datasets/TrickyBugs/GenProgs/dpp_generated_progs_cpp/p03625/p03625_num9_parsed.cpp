#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> sticks(N);
    for (int i = 0; i < N; i++) {
        cin >> sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    long long maxArea = 0;

    for (int i = N - 1; i >= 3; i--) {
        if (sticks[i] == sticks[i - 1]) {
            if (maxArea != 0) {
                cout << maxArea << endl;
                return 0;
            }

            i--;
        } else {
            maxArea = max(maxArea, sticks[i] * sticks[i - 1]);
        }
    }

    cout << maxArea << endl;
    return 0;
}
