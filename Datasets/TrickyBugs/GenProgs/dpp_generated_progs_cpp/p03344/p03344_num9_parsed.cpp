#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to calculate the minimum initial amount of money required to win the game
int calculateMinimumAmount(int N, int M, vector<int>& A, vector<int>& B, vector<vector<int>>& G) {
    // Array to store the number of vertices which require at least a certain amount of money
    vector<long long> count(N + 1);

    // Perform a BFS starting from the first vertex
    queue<int> q;
    q.push(1);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        count[curr]++;

        // Iterate over the adjacent vertices
        for (int next : G[curr]) {
            if (count[next] == 0) {
                q.push(next);
            }
        }
    }

    // Calculate the minimum amount of money required
    long long result = 0;
    for (int i = 1; i <= N; i++) {
        result += B[i] * min(count[i], count[i ^ 1]);
    }
    return result;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N + 1), B(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<vector<int>> G(N + 1);

    for (int i = 1; i <= M; i++) {
        int U, V;
        cin >> U >> V;

        G[U].push_back(V);
        G[V].push_back(U);
    }

    // Calculate the minimum initial amount of money required
    int minimumAmount = calculateMinimumAmount(N, M, A, B, G);

    cout << minimumAmount << endl;

    return 0;
}