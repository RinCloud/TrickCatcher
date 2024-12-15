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

    sort(a.begin(), a.end(), greater<int>());

    int sum = a[0];
    for (int i = 1; i < N; i++) {
        sum -= 1;
        if (sum < a[i]) {
            cout << "Impossible\n";
            return 0;
        }
        sum += a[i];
    }

    cout << "Possible\n";
    return 0;
}