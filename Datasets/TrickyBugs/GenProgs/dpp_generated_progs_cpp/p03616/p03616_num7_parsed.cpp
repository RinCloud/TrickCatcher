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
    vector<int> t(Q);
    vector<int> a(Q);
    for (int i = 0; i < Q; i++) {
        cin >> t[i] >> a[i];
    }

    int currentBulb = 0;
    long long currentSand = X;
    int currentIndex = 0;
    for (int i = 0; i < Q; i++) {
        while (currentIndex < K && r[currentIndex] <= t[i]) {
            if (currentBulb == 0) {
                currentSand -= a[currentIndex];
            } else {
                currentSand += a[currentIndex];
            }
            currentBulb = 1 - currentBulb;
            currentIndex++;
        }
        if (currentBulb == 0) {
            cout << currentSand << endl;
        } else {
            cout << X - currentSand << endl;
        }
    }

    return 0;
}