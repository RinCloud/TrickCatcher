#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Function to find the maximum possible score at the end of the game
long long findMaxScore(int N, int M, vector<pair<int, pair<int, int>>>& edges) {
    vector<long long> dist(N+1, LLONG_MIN); // Array to store maximum score at each vertex
    dist[1] = 0;
    for(int i=1; i<N; i++) {
        for(int j=0; j<M; j++) {
            int u = edges[j].first;
            int v = edges[j].second.first;
            int w = edges[j].second.second;
            if(dist[u] != LLONG_MIN && dist[v] < dist[u] + w) {
                dist[v] = dist[u] + w;
            }
        }
    }
    // Check for negative cycle
    for(int i=0; i<M; i++) {
        int u = edges[i].first;
        int v = edges[i].second.first;
        int w = edges[i].second.second;
        if(dist[u] != LLONG_MIN && dist[v] < dist[u] + w) {
            return LLONG_MAX; // Infinite score possible
        }
    }
    // If score is not infinite, return the maximum score at vertex N
    return dist[N];
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, pair<int, int>>> edges(M);
    for(int i=0; i<M; i++) {
        cin >> edges[i].first >> edges[i].second.first >> edges[i].second.second;
    }
    long long maxScore = findMaxScore(N, M, edges);
    if(maxScore == LLONG_MAX)
        cout << "inf" << endl;
    else
        cout << maxScore << endl;
    return 0;
}