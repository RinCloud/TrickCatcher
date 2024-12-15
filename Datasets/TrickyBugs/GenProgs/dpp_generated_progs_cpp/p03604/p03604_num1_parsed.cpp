#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

struct Robot {
    int type;
    int x, y;

    Robot(int t, int a, int b) {
        type = t;
        x = a;
        y = b;
    }

    bool operator<(const Robot& other) const {
        if (type != other.type) {
            return type < other.type;
        }
        if (x != other.x) {
            return x < other.x;
        }
        return y < other.y;
    }
};

vector<Robot> robots;
vector<int> used;

int dfs(int idx) {
    if (idx >= robots.size()) {
        return 1;
    }

    int res = 0;

    if (used[idx]) {
        res = dfs(idx + 1);
    } else {
        int type = robots[idx].type;
        int x = robots[idx].x;
        int y = robots[idx].y;

        if (type == 0) {
            int l = y + 1;
            int r = x;
            for (int i = l; i <= r; i++) {
                if (!used[i - 1 + robots.size()]) {
                    used[i - 1 + robots.size()] = true;
                    res += dfs(idx + 1);
                    used[i - 1 + robots.size()] = false;
                }
            }
        } else {
            int l = x + 1;
            int r = y;
            for (int i = l; i <= r; i++) {
                if (!used[i - 1 + robots.size()]) {
                    used[i - 1 + robots.size()] = true;
                    res += dfs(idx + 1);
                    used[i - 1 + robots.size()] = false;
                }
            }
        }
    }

    res %= MOD;
    return res;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        int x, y;
        cin >> x >> y;
        robots.push_back(Robot(x == 1 ? 0 : 1, x, y));
    }

    sort(robots.begin(), robots.end());
    used.resize(2 * N, false);

    int ans = dfs(0);
    cout << ans << endl;

    return 0;
}