#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> shoppingCentres(N);
    for (int i = 0; i < N; i++) {
        cin >> shoppingCentres[i];
    }

    vector<int> shoppingTimes(N);
    for (int i = 0; i < N; i++) {
        cin >> shoppingTimes[i];
    }

    vector<long long> dp(N + 2);
    for (int i = 0; i < N; i++) {
        dp[i + 2] = dp[i] + abs(shoppingCentres[i] - shoppingCentres[i + 1]);
    }

    long long totalTime = 0;
    for (int i = 0; i < N; i++) {
        totalTime += shoppingTimes[i];
    }

    for (int i = 1; i <= N; i++) {
        long long time = dp[i - 1] + (L - shoppingCentres[i - 1]) + dp[N + 1] - dp[i + 1];
        totalTime = min(totalTime, time);
    }

    cout << totalTime << endl;

    return 0;
}