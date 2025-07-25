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
    for (int i = 0; i < N - 1; i++) {
        int total = a[i] + a[i + 1];
        if (total > x) {
            int diff = total - x;
            operations += diff;
            if (a[i + 1] >= diff) {
                a[i + 1] -= diff;
            } else {
                a[i + 1] = 0;
            }
        }
    }

    cout << operations << endl;

    return 0;
}
