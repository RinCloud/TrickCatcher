#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    unordered_set<int> x_set, y_set;

    for (int i = 0; i < N; i++) {
        x_set.insert(x[i]);
        y_set.insert(y[i]);
    }

    int result = 0;

    for (int i = 0; i < N; i++) {
        if (x_set.size() - 1 > 0 && y_set.size() - 1 > 0) {
            result += (x_set.size() - 1) * (y_set.size() - 1);
        }
    }

    cout << result << endl;

    return 0;
}