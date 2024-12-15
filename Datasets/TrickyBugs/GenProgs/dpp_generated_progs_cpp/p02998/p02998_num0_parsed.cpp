#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<int, vector<int>> x_map;
    unordered_map<int, vector<int>> y_map;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        x_map[x].push_back(y);
        y_map[y].push_back(x);
    }

    int count = 0;
    for (auto& p : x_map) {
        vector<int>& ys = p.second;
        int size = ys.size();
        if (size > 1) {
            sort(ys.begin(), ys.end());
            for (int i = 1; i < size; i++) {
                if (ys[i] - ys[i-1] > 1) {
                    count += ys[i] - ys[i-1] - 1;
                }
            }
        }
    }

    for (auto& p : y_map) {
        vector<int>& xs = p.second;
        int size = xs.size();
        if (size > 1) {
            sort(xs.begin(), xs.end());
            for (int i = 1; i < size; i++) {
                if (xs[i] - xs[i-1] > 1) {
                    count += xs[i] - xs[i-1] - 1;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}