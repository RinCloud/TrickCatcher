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

    bool sorted = true;
    for (int i = 0; i < N; i++) {
        if (p[i] != i + 1) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "YES" << endl;
    } else {
        bool canSwap = false;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (p[i] > p[j]) {
                    swap(p[i], p[j]);
                    bool sortedAfterSwap = true;
                    for (int k = 0; k < N; k++) {
                        if (p[k] != k + 1) {
                            sortedAfterSwap = false;
                            break;
                        }
                    }
                    if (sortedAfterSwap) {
                        canSwap = true;
                        break;
                    }
                    swap(p[i], p[j]); // undo the swap
                }
            }
            if (canSwap) {
                break;
            }
        }
        if (canSwap) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}