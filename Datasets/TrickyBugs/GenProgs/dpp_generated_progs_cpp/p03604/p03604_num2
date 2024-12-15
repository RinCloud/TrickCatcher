#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> balls(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> balls[i].first >> balls[i].second;
    }

    if (N % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> A, B;
    for (int i = 1; i <= N; i++) {
        A.push_back(i);
        B.push_back(i);
    }

    long long ans = 1;
    sort(balls.begin(), balls.end());

    do {
        vector<pair<int, int>> robotA, robotB;
        int idx = 0;

        for (int i = 0; i < N; i++) {
            robotA.push_back({A[i], balls[idx++].first});
        }
        for (int i = 0; i < N; i++) {
            robotB.push_back({balls[idx++].second, B[i]});
        }

        bool ok = true;
        for (int i = 0; i < N; i++) {
            if (robotA[i].first > robotB[i].second || robotA[i].second > robotB[i].first) {
                ok = false;
                break;
            }
        }

        if (ok) {
            int cnt = 0;
            vector<bool> used(2 * N, false);

            for (int i = 0; i < N; i++) {
                int x = robotA[i].first;
                int y = robotA[i].second;

                for (int j = 0; j < 2 * N; j++) {
                    if (!used[j] && balls[j].first == x && balls[j].second == y) {
                        used[j] = true;
                        cnt++;
                        break;
                    }
                }
            }

            long long ways = 1;
            for (int i = 1; i <= cnt; i++) {
                ways = (ways * i) % MOD;
            }
            ans = (ans + ways) % MOD;
        }
    } while (next_permutation(B.begin(), B.end()));

    cout << ans << endl;

    return 0;
}