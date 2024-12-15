#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, vector<int>> x, y;
    for (int i = 0; i < N; i++) {
        int xi, yi;
        cin >> xi >> yi;
        x[xi].push_back(yi);
        y[yi].push_back(xi);
    }

    int ans = 0;
    for (auto itx : x) {
        int xi = itx.first;
        vector<int> ys = itx.second;
        if (ys.size() <= 1) continue;

        for (int i = 0; i < ys.size(); i++) {
            if (y[ys[i]].size() <= 1) continue;

            int cnt = 0;
            for (int j = 0; j < ys.size(); j++) {
                if (ys[j] == ys[i]) continue;
                if (y[ys[j]].size() > 1) cnt++;
            }
            ans += cnt * (cnt - 1) / 2;
        }
    }

    cout << ans << endl;
    return 0;
}