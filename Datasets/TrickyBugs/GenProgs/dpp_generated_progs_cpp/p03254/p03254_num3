#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (x >= a[i]) {
            count++;
            x -= a[i];
        } else {
            break;
        }
    }

    if (count == N && x > 0) {
        count--;
    }

    cout << count << endl;

    return 0;
}