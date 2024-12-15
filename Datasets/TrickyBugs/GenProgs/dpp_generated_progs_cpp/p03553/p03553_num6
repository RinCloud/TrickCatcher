#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    vector<bool> smashed(N + 1, false);
    int earnings = 0;

    for (int i = 1; i <= N; i++) {
        if (smashed[i]) {
            continue;
        }
        for (int j = i; j <= N; j += i) {
            smashed[j] = true;
        }
        earnings += a[i - 1];
    }

    cout << earnings << endl;

    return 0;
}