#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<int> l(q), r(q), ans(q);
    for (int i = 0; i < q; i++) {
        cin >> l[i] >> r[i];
        l[i]--;
        r[i]--;
    }

    const int p = sqrt(n) + 1;
    vector<int> count(n);
    vector<tuple<int, int, int>> s;
    for (int i = 0; i < q; i++) {
        s.push_back(make_tuple(l[i] / p, r[i], i));
    }

    sort(s.begin(), s.end());

    int g = 0, h = 0, k = 1;
    vector<int> countColors(n+1);
    countColors[c[0]]++;
    for (int i = 0; i < q; i++) {
        int u = l[get<2>(s[i])];
        int v = r[get<2>(s[i])];

        while (h < v) {
            h++;
            if (countColors[c[h]] == 0) {
                k++;
            }
            countColors[c[h]]++;
        }

        while (h > v) {
            if (countColors[c[h]] == 1) {
                k--;
            }
            countColors[c[h]]--;
            h--;
        }

        while (g < u) {
            if (countColors[c[g]] == 1) {
                k--;
            }
            countColors[c[g]]--;
            g++;
        }

        while (g > u) {
            g--;
            if (countColors[c[g]] == 0) {
                k++;
            }
            countColors[c[g]]++;
        }

        ans[get<2>(s[i])] = k;
    }

    for (int i = 0; i < q; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}