#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> x(N);
    vector<long long> y(N);
    vector<long long> z(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }

    long long ans = 0;

    for (int bit = 0; bit < (1 << N); bit++) {
        if (__builtin_popcount(bit) != M) {
            continue;
        }

        vector<long long> b;
        vector<long long> t;
        vector<long long> p;

        for (int i = 0; i < N; i++) {
            if ((bit >> i) & 1) {
                b.push_back(x[i]);
                t.push_back(y[i]);
                p.push_back(z[i]);
            }
        }

        long long beauty_sum = 0;
        long long tastiness_sum = 0;
        long long popularity_sum = 0;

        for (auto beauty : b) {
            beauty_sum += beauty;
        }

        for (auto tastiness : t) {
            tastiness_sum += tastiness;
        }

        for (auto popularity : p) {
            popularity_sum += popularity;
        }

        ans = max(ans, abs(beauty_sum) + abs(tastiness_sum) + abs(popularity_sum));
    }

    cout << ans << endl;

    return 0;
}