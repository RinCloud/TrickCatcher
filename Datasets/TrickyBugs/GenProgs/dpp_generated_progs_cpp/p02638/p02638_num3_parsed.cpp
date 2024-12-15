#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> inDegree;

bool checkConstraints(int N, int K, int P) {
    if (N < 4 || N > 200 || K < (N - 1) / 2 || K > N - 1) {
        return false;
    }
    
    // Check if P is prime
    for (int i = 2; i * i <= P; i++) {
        if (P % i == 0) {
            return false;
        }
    }
    
    return true;
}

void generateGraph(int N, int K, int u, int v, int& count) {
    if (v == N) {
        count++;
        return;
    }
    
    for (int i = 0; i < N; i++) {
        if (!visited[i] && inDegree[i] < K) {
            visited[i] = true;
            inDegree[i]++;
            adj[u][v] = i;
            
            generateGraph(N, K, u, v + 1, count);
            
            visited[i] = false;
            inDegree[i]--;
            adj[u][v] = -1;
        }
    }
}

int countGraphs(int N, int K, int P) {
    adj.assign(N, vector<int>(N, -1));
    visited.assign(N, false);
    inDegree.assign(N, 0);
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        visited[i] = true;
        generateGraph(N, K, i, 1, count);
        visited[i] = false;
    }
    
    return count % P;
}

int main() {
    int N, K, P;
    cin >> N >> K >> P;
    
    if (!checkConstraints(N, K, P)) {
        cout << "Invalid input" << endl;
        return 0;
    }
    
    int result = countGraphs(N, K, P);
    cout << result << endl;
    
    return 0;
}