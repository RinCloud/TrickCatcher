#include <iostream>
#include <vector>

using namespace std;

bool isPossible(const vector<int>& a) {
    int N = a.size();
    int maxDist = 0;
    int sumDist = 0;
    for (int i = 0; i < N; i++) {
        maxDist = max(maxDist, a[i]);
        sumDist += a[i];
    }
    int minDist = sumDist - maxDist;
    if (minDist >= N - 2 && minDist % 2 == (N - 2) % 2) {
        return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    if (isPossible(a)) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}