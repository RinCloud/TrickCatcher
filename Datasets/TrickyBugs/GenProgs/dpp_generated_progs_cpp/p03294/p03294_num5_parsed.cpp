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

    int maxVal = 0;
    for (int m = a[0]; m < a[N - 1] * N; m++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += m % a[i];
        }
        maxVal = max(maxVal, sum);
    }

    cout << maxVal << endl;

    return 0;
}