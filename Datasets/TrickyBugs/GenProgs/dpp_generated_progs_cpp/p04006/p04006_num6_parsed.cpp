#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    long long time = 0, prevColor = a[0];
    for (int i = 1; i < N; i++) {
        if (a[i - 1] + a[i] > x) {
            long long diff = a[i - 1] + a[i] - x;
            time += diff;
            if (a[i] - diff < 0) {
                prevColor = x;
            } else {
                prevColor = a[i] - diff;
            }
        } else {
            prevColor = a[i];
        }
    }

    cout << time << endl;

    return 0;
}