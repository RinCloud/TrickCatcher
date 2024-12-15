#include <iostream>
#include <vector>
using namespace std;

int score(vector<int>& A, vector<vector<int>>& queries) {
    int res = 0;
    // Calculate the score for each query
    for (auto query : queries) {
        int ai = query[0] - 1; // Convert to 0-based indexing
        int bi = query[1] - 1; // Convert to 0-based indexing
        int ci = query[2];
        int di = query[3];
        if (A[bi] - A[ai] == ci) {
            res += di;
        }
    }
    return res;
}

int dfs(int cur, int N, int M, vector<int>& A, vector<vector<int>>& queries) {
    // Base case: once we have filled all N elements of A,
    // calculate the score and return it
    if (cur == N) {
        return score(A, queries);
    }
    
    int res = 0;
    
    // Try all possible numbers for the current position of A
    for (int num = A[cur - 1]; num <= M; num++) {
        A[cur] = num;
        res = max(res, dfs(cur + 1, N, M, A, queries));
    }
    
    return res;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    
    vector<vector<int>> queries(Q, vector<int>(4));
    for (int i = 0; i < Q; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2] >> queries[i][3];
    }
    
    vector<int> A(N, 1); // Initialize A with the smallest possible values
    
    int maxScore = dfs(1, N, M, A, queries);
    
    cout << maxScore << endl;
    
    return 0;
}