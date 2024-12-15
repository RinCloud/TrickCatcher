#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    unordered_map<int, unordered_map<int, char>> grid;
    vector<int> blackCount(K+1, 0);
    vector<int> whiteCount(K+1, 0);

    for (int i = 0; i < N; ++i) {
        int x, y;
        char c;
        cin >> x >> y >> c;

        int r = x % (2*K);
        int s = y % (2*K);

        if (r >= K) r = 2*K - r;
        if (s >= K) s = 2*K - s;

        if (c == 'B') {
            blackCount[s]++;
            whiteCount[s]--;
        }
        else {
            blackCount[s]--;
            whiteCount[s]++;
        }

        if (grid[r][s] != c) {
            grid[r][s] = c;
        }
    }

    int answer = 0;
    for (int i = 0; i <= K; ++i) {
        answer = max(answer, blackCount[i]);
        answer = max(answer, whiteCount[i]);
    }
    
    cout << answer << endl;

    return 0;
}