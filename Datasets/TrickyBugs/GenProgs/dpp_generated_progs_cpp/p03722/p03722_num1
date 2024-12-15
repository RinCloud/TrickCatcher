#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Edge {
    int from, to, weight;
};

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<Edge> edges(M);
    for (int i = 0; i < M; i++) {
        cin >> edges[i].from >> edges[i].to >> edges[i].weight;
    }
    
    vector<long long> dist(N, LLONG_MIN);
    dist[0] = 0;
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M; j++) {
            if (dist[edges[j].from - 1] != LLONG_MIN && dist[edges[j].from - 1] + edges[j].weight > dist[edges[j].to - 1]) {
                dist[edges[j].to - 1] = dist[edges[j].from - 1] + edges[j].weight;
            }
        }
    }
    
    bool isInf = false;
    for (int j = 0; j < M; j++) {
        if (dist[edges[j].from - 1] != LLONG_MIN && dist[edges[j].from - 1] + edges[j].weight > dist[edges[j].to - 1]) {
            isInf = true;
            break;
        }
    }
    
    if (isInf) {
        cout << "inf" << endl;
    } else {
        cout << dist[N - 1] << endl;
    }
    
    return 0;
}