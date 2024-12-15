#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

long long findMinCoins(long long N, long long A, long long B, long long C, long long D) {
    vector<long long> minCoins(N + 1, LLONG_MAX);
    minCoins[0] = 0;
    vector<bool> visited(N + 1, false);
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        long long curr = pq.top().second;
        pq.pop();

        if (visited[curr]) {
            continue;
        }
        visited[curr] = true;

        if (curr == N) {
            return minCoins[curr];
        }

        if (curr + 1 <= N && minCoins[curr + 1] > minCoins[curr] + D) {
            minCoins[curr + 1] = minCoins[curr] + D;
            pq.push({minCoins[curr + 1], curr + 1});
        }
        if (curr - 1 >= 0 && minCoins[curr - 1] > minCoins[curr] + D) {
            minCoins[curr - 1] = minCoins[curr] + D;
            pq.push({minCoins[curr - 1], curr - 1});
        }
        if (curr * 2 <= N && minCoins[curr * 2] > minCoins[curr] + A) {
            minCoins[curr * 2] = minCoins[curr] + A;
            pq.push({minCoins[curr * 2], curr * 2});
        }
        if (curr * 3 <= N && minCoins[curr * 3] > minCoins[curr] + B) {
            minCoins[curr * 3] = minCoins[curr] + B;
            pq.push({minCoins[curr * 3], curr * 3});
        }
        if (curr * 5 <= N && minCoins[curr * 5] > minCoins[curr] + C) {
            minCoins[curr * 5] = minCoins[curr] + C;
            pq.push({minCoins[curr * 5], curr * 5});
        }
    }

    return -1;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        long long minCoins = findMinCoins(N, A, B, C, D);
        cout << minCoins << endl;
    }

    return 0;
}