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

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = i; j < N; j++) {
            sum += a[j];
            int count = j - i + 1;
            if (sum >= K * count) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}