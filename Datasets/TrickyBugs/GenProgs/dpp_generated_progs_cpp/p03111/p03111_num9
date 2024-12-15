#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;

    vector<int> l(N);
    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }

    int res = INT_MAX;

    for (int m1 = 0; m1 < (1 << N); m1++) {
        for (int m2 = 0; m2 < (1 << N); m2++) {
            vector<int> a, b, c;
            int tmp = 0;
            
            for (int i = 0; i < N; i++) {
                if ((m1 & (1 << i)) > 0) {
                    if ((m2 & (1 << i)) > 0) {
                        c.push_back(l[i]);
                    } else {
                        b.push_back(l[i]);
                    }
                } else {
                    a.push_back(l[i]);
                }
            }

            if (a.size() == 0 || b.size() == 0 || c.size() == 0) {
                continue;
            }
            
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            sort(c.begin(), c.end());
            
            for (int i = 0; i < a.size() - 1; i++) {
                tmp += a[i];
            }
            for (int i = 0; i < b.size() - 1; i++) {
                tmp += b[i];
            }
            for (int i = 0; i < c.size() - 1; i++) {
                tmp += c[i];
            }
            
            tmp += abs(A - accumulate(a.begin(), a.end(), 0));
            tmp += abs(B - accumulate(b.begin(), b.end(), 0));
            tmp += abs(C - accumulate(c.begin(), c.end(), 0));
            
            res = min(res, tmp);
        }
    }

    cout << res << endl;

    return 0;
}