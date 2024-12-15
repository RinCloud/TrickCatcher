#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> balls(N);
    map<int, int> count;

    for (int i = 0; i < N; i++) {
        cin >> balls[i];
        count[balls[i]]++;
    }

    vector<int> frequency;

    for (const auto& kv : count) {
        frequency.push_back(kv.second);
    }

    sort(frequency.begin(), frequency.end());

    int ans = 0;

    for (int i = 0; i < frequency.size() - K; i++) {
        ans += frequency[i];
    }

    cout << ans;
    return 0;
}