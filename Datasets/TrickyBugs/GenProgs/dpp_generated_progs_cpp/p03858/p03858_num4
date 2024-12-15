#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;
    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int count = 0;
    int dx = x[a-1] - x[b-1];
    int dy = y[a-1] - y[b-1];
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (abs(x[i] - x[j]) == dx && abs(y[i] - y[j]) == dy) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}