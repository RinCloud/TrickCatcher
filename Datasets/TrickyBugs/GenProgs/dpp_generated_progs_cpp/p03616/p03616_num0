#include <iostream>
#include <vector>

using namespace std;

int main() {
    int X;
    cin >> X;

    int K;
    cin >> K;

    vector<int> r(K);
    for (int i = 0; i < K; i++) {
        cin >> r[i];
    }

    int Q;
    cin >> Q;

    vector<pair<int, int>> qa(Q);
    for (int i = 0; i < Q; i++) {
        cin >> qa[i].first >> qa[i].second;
    }

    vector<int> t(K);
    vector<int> a(K);
    int now = 0;
    for (int i = 0; i < K; i++) {
        t[i] = r[i] - now;
        a[i] = X - a[i-1];
        now = r[i];
    }

    int upper_a = X;
    int upper_t = 0;
    int lower_a = 0;
    int lower_t = 0;

    for (int i = 0; i < K; i++) {
        upper_a -= t[i];
        lower_a += t[i];

        if (i % 2 == 0) {
            swap(upper_a, lower_a);
            swap(upper_t, lower_t);
        }

        upper_t += t[i];
        lower_t += t[i];
    }

    for (int i = 0; i < Q; i++) {
        if (qa[i].first < upper_t) {
            int remaining_t = upper_t - qa[i].first;

            if (remaining_t <= upper_a - qa[i].second) {
                cout << upper_a - remaining_t << endl;
            } else {
                int s = qa[i].second + (remaining_t - (upper_a - qa[i].second)) % 2;
                cout << X - s << endl;
            }
        } else {
            int remaining_t = qa[i].first - upper_t;

            if (remaining_t <= lower_a + qa[i].second) {
                cout << remaining_t + qa[i].second << endl;
            } else {
                int s = X - (qa[i].second - (remaining_t - (lower_a + qa[i].second))) % 2;
                cout << s << endl;
            }
        }
    }

    return 0;
}