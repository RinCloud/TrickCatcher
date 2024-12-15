#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int count = 0;
    for (int l = 0; l < N; l++) {
        int sum = 0;
        for (int r = l; r < N; r++) {
            sum += a[r];
            if (sum / (r - l + 1) >= K) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}