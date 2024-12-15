#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);
    map<pair<int, int>, int> count;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        count[{x[i], y[i]}]++;
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dx = x[j] - x[i];
            int dy = y[j] - y[i];
            ans = max(ans, count[{x[i] + dy, y[i] - dx}] + count[{x[j] + dy, y[j] - dx}] +
                           count[{x[i] - dy, y[i] + dx}] + count[{x[j] - dy, y[j] + dx}] - 3);
        }
    }

    cout << ans << endl;

    return 0;
}