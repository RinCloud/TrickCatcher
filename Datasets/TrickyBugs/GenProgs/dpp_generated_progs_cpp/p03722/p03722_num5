#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max();

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(M), b(M);
    vector<long long> c(M);
    for (int i = 0; i < M; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<long long> dist(N, -INF);
    dist[0] = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M; j++) {
            if (dist[a[j] - 1] != -INF) {
                dist[b[j] - 1] = max(dist[b[j] - 1], dist[a[j] - 1] + c[j]);
            }
        }
    }

    bool reachable = false;
    for (int i = 0; i < M; i++) {
        if (dist[b[i] - 1] < dist[a[i] - 1] + c[i]) {
            reachable = true;
            break;
        }
    }

    if (reachable) {
        cout << "inf" << endl;
    } else {
        cout << dist[N - 1] << endl;
    }
    return 0;
}