#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(N);
    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    vector<int> c(M);
    vector<int> d(M);
    for (int i = 0; i < M; i++) {
        cin >> c[i] >> d[i];
    }

    vector<int> result(N);
    for (int i = 0; i < N; i++) {
        int minDistance = abs(a[i] - c[0]) + abs(b[i] - d[0]);
        result[i] = 1;

        for (int j = 1; j < M; j++) {
            int distance = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if (distance < minDistance) {
                minDistance = distance;
                result[i] = j + 1;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << endl;
    }

    return 0;
}