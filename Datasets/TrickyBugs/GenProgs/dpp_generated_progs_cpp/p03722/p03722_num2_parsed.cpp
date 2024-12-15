#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max() / 2;

struct Edge {
    int a, b;
    long long c;
};

int main() {
    int N, M;
    cin >> N >> M;

    vector<Edge> edges(M);
    for (int i = 0; i < M; i++) {
        cin >> edges[i].a >> edges[i].b >> edges[i].c;
    }

    vector<long long> dist(N, -INF);
    dist[0] = 0;

    for (int k = 0; k < N - 1; k++) {
        for (int i = 0; i < M; i++) {
            int a = edges[i].a, b = edges[i].b;
            long long c = edges[i].c;
            if (dist[a-1] != -INF && dist[b-1] < dist[a-1] + c) {
                dist[b-1] = dist[a-1] + c;
            }
        }
    }

    long long max_score = dist[N-1];

    vector<bool> infinite(N, false);
    for (int k = 0; k < N - 1; k++) {
        for (int i = 0; i < M; i++) {
            int a = edges[i].a, b = edges[i].b;
            long long c = edges[i].c;
            if (dist[a-1] != -INF && dist[b-1] < dist[a-1] + c) {
                dist[b-1] = dist[a-1] + c;
                infinite[b-1] = true;
            }
            if (infinite[a-1] == true) {
                infinite[b-1] = true;
            }
        }
    }

    if (infinite[N-1]) {
        cout << "inf" << endl;
    } else {
        cout << max_score << endl;
    }

    return 0;
}
