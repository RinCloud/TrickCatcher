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

    int max_count = 0;
    for (int i = 0; i < N; i++) {
        int count_minus = 0;
        int count_plus = 0;

        for (int j = 0; j < N; j++) {
            if (a[j] < a[i]) {
                count_minus++;
            } else if (a[j] > a[i]) {
                count_plus++;
            }
        }

        max_count = max(max_count, count_minus + count_plus + 1);
    }

    cout << max_count << endl;

    return 0;
}