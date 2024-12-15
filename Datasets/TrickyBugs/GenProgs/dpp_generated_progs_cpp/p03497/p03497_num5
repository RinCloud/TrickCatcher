#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }

    map<int, int> counts;
    for (int i = 0; i < N; i++) {
        counts[balls[i]]++;
    }

    vector<int> distinct;
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        distinct.push_back(it->second);
    }

    sort(distinct.begin(), distinct.end());

    int ans = 0;
    for (int i = 0; i < (int)distinct.size() - K; i++) {
        ans += distinct[i];
    }

    cout << ans << endl;

    return 0;
}