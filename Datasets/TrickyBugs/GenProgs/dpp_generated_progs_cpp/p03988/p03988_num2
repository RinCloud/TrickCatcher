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

    int prev_sum = 0;
    for (int i = 1; i <= N; i++) {
        int curr_sum = i * (i - 1) / 2;
        if (curr_sum < prev_sum + a[i - 1]) {
            cout << "Impossible" << endl;
            return 0;
        }
        prev_sum = curr_sum;
    }

    cout << "Possible" << endl;
    return 0;
}