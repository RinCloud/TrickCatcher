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

    long long operations = 0;
    for (int i = 1; i < N; i++) {
        int sum = a[i - 1] + a[i];
        if (sum > x) {
            int diff = sum - x;
            operations += diff;
            if (diff <= a[i]) {
                a[i] -= diff;
            } else {
                a[i] = 0;
                a[i - 1] -= (diff - a[i]);
            }
        }
    }

    cout << operations << endl;

    return 0;
}