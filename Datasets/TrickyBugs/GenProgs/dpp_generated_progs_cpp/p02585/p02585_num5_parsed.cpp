#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N), C(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
        P[i]--;
    }
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    long long ans = -1e18;
    for (int i = 0; i < N; i++) {
        int pos = i;
        int loop = 0;
        vector<int> score;
        while (true) {
            pos = P[pos];
            loop++;
            score.push_back(C[pos]);
            if (pos == i) break;
        }
        
        int len = score.size();
        long long sum = 0;
        for (int j = 0; j < len; j++) {
            sum += score[j];
            if (j + 1 > K) break;
            long long now = sum;
            if (loop > 0) now += (K - (j + 1)) / loop * max(0LL, sum);
            ans = max(ans, now);
        }
    }
    cout << ans << endl;
    return 0;
}