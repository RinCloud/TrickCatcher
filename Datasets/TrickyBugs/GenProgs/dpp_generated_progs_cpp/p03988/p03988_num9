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

    int maxDist = a.back();
    int sumDist = 0;
    for (int i = 0; i < N - 1; i++) {
        sumDist += a[i];
    }

    if (maxDist <= sumDist) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}