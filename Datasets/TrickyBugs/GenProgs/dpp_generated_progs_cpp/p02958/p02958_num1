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

    bool isPossible = true;

    for (int i = 0; i < N; i++) {
        if (p[i] == i + 1) {
            continue;
        }

        if (p[p[i] - 1] != i + 1) {
            isPossible = false;
            break;
        }

        swap(p[i], p[p[i] - 1]);
    }

    if (isPossible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}