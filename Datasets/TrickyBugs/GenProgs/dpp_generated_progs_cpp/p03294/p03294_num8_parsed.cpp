#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max_remainder = 0;
    for (int m = 1; m < a[N - 1] * N; m++) {
        int remainder = 0;
        for (int i = 0; i < N; i++) {
            remainder += m % a[i];
        }
        max_remainder = max(max_remainder, remainder);
    }

    cout << max_remainder << endl;

    return 0;
}