#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; ++i) {
        cin >> b[i];
    }

    vector<int> a;

    for (int i = 0; i < N; ++i) {
        int j = -1;
        for (int k = 0; k < a.size(); ++k) {
            if (a[k] == i + 1) {
                j = k;
                break;
            }
        }
        if (j == -1) {
            if (b[i] > i + 1) {
                cout << -1 << endl;
                return 0;
            }
            a.insert(a.begin() + b[i] - 1, i + 1);
        } else {
            if (i + 1 != b[i]) {
                cout << -1 << endl;
                return 0;
            }
            a.erase(a.begin() + j);
            a.insert(a.begin(), i + 1);
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}