#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;

    vector<int> tak(n + 1);
    vector<int> aok(m + 1);

    for (int i = 1; i <= n; i++) {
        tak[i] = s[i - 1] - '0';
    }
    for (int i = 1; i <= m; i++) {
        aok[i] = t[i - 1] - '0';
    }

    for (int i = 0; i < k; i++) {
        for (int j = 1; j <= n; j++) {
            for (int l = 1; l <= m; l++) {
                int z = tak[j] & aok[l];
                tak[j] += z;
                aok[l] += z;
            }
        }
    }

    reverse(tak.begin() + 1, tak.end());
    reverse(aok.begin() + 1, aok.end());

    cout << tak[1];
    for (int i = 2; i <= n; i++) {
        cout << tak[i];
    }
    cout << endl;

    cout << aok[1];
    for (int i = 2; i <= m; i++) {
        cout << aok[i];
    }
    cout << endl;

    return 0;
}