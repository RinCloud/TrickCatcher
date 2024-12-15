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

    sort(sticks.begin(), sticks.end());

    long long int maxArea = 0;
    for (int i = N - 1; i >= 3; i--) {
        if (sticks[i] == sticks[i - 1] && sticks[i - 2] == sticks[i - 3]) {
            maxArea = max(maxArea, (long long int)sticks[i] * sticks[i - 2]);
            i -= 3;
        }
    }

    cout << maxArea << endl;

    return 0;
}