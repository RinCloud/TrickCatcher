#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<pair<int, int>> balls;
    for (int i = 0; i < N; i++) {
        int c, w;
        cin >> c >> w;
        balls.push_back({c, w});
    }

    unordered_map<int, int> colorCount;
    long long totalSeqCount = 1;
    for (int i = 0; i < N; i++) {
        int color = balls[i].first;
        colorCount[color]++;
        
        if (colorCount[color] > 1) {
            totalSeqCount = (totalSeqCount * colorCount[color]) % MOD;
        }
    }

    sort(balls.begin(), balls.end(), [&](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    int cnt = 1;
    bool hasSameColor = false;
    for (int i = 1; i < N; i++) {
        if (balls[i].second <= X) {
            cnt++;
            hasSameColor |= (balls[i].first == balls[i-1].first);
        } else {
            break;
        }
    }

    long long result = 0;
    if (cnt > 1 && hasSameColor) {
        result = (result + totalSeqCount) % MOD;
    }
    
    cnt = 1;
    for (int i = 1; i < N; i++) {
        if (balls[i].second <= Y) {
            cnt++;
        } else {
            break;
        }
    }
    
    result = (result + cnt) % MOD;
    
    cout << result << endl;

    return 0;
}