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

    int max_f = 0;

    for (int m = 0; m < *max_element(a.begin(), a.end()); m++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += m % a[i];
        }
        max_f = max(max_f, sum);
    }

    cout << max_f << endl;

    return 0;
}