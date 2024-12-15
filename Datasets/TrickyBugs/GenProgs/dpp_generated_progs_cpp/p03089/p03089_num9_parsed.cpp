#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    vector<int> a;
    for (int i = 0; i < N; i++) {
        int j = -1;
        for (int k = i; k >= 0; k--) {
            if (b[k] == i + 1) {
                j = k;
                break;
            }
        }

        if (j == -1) {
            cout << -1 << endl;
            return 0;
        }

        a.insert(a.begin() + j, i + 1);
    }

    for (int i = 0; i < N; i++) {
        cout << a[i] << endl;
    }

    return 0;
}