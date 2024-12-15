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

    int operations = 0;
    for (int i = 1; i < N; i++) {
        int excess = a[i-1] + a[i] - x;
        if (excess > 0) {
            operations += excess;
            a[i] = max(a[i] - excess, 0);
        }
    }

    cout << operations << endl;

    return 0;
}