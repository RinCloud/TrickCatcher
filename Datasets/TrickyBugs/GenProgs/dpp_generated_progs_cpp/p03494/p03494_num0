#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 0;
    while (true) {
        bool allEven = true;
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
            A[i] /= 2;
        }

        if (allEven) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}