#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int maxBrick = -1;
    for (int i = 0; i < N; i++) {
        if (a[i] > maxBrick + 1) {
            cout << -1 << endl;
            return 0;
        }
        maxBrick = max(maxBrick, a[i]);
    }

    int cnt = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (a[i] == maxBrick) {
            cnt++;
        } else {
            break;
        }
        maxBrick--;
    }

    cout << N - cnt << endl;

    return 0;
}