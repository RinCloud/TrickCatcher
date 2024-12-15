#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    bool canSort = true;
    for (int i = 0; i < N; i++) {
        if (p[i] != i + 1 && p[p[i] - 1] != i + 1) {
            canSort = false;
            break;
        }
    }

    if (canSort) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}