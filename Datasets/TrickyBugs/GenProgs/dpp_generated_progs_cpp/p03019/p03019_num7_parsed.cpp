#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> b(N);
    vector<int> l(N);
    vector<int> u(N);

    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }

    long long low_sum = 0;
    long long high_sum = 0;

    for (int i = 0; i < N; i++) {
        low_sum += (long long)b[i] * l[i];
        high_sum += (long long)b[i] * u[i];
    }

    if (low_sum > X || high_sum < X) {
        cout << -1 << endl;
        return 0;
    }

    long long diff_sum = high_sum - X;
    long long hours = 0;

    for (int i = 0; i < N; i++) {
        long long diff = u[i] - l[i];
        long long target_hours = diff_sum / diff;

        if (diff_sum % diff != 0) {
            target_hours++;
        }

        hours = max(hours, target_hours);
    }

    cout << hours << endl;

    return 0;
}