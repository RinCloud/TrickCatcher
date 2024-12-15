#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 0;
    for (int num = 1; num <= M; num++) {
        bool isSemiCommon = true;
        for (int i = 0; i < N; i++) {
            int p = (num * 2) / A[i];
            int X = A[i] * (p + 0.5);
            if (X != num) {
                isSemiCommon = false;
                break;
            }
        }
        if (isSemiCommon) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}