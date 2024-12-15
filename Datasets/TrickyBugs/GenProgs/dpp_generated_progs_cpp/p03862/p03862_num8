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
        if (a[i] + a[i-1] > x) {
            operations += a[i] + a[i-1] - x;
            if (a[i] > x) {
                a[i] -= a[i] - x;
            }
            if (a[i-1] > x) {
                a[i-1] -= a[i-1] - x;
            }
        }
    }

    cout << operations << endl;

    return 0;
}