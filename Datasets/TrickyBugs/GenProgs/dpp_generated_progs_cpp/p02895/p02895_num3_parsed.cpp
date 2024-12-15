#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> A;
vector<bool> visited;

long long countWays(int index, int pairs) {
    if (index == 2 * N) {
        return pairs == 0 ? 1 : 0;
    }
    
    if (visited[index]) {
        return countWays(index + 1, pairs);
    }
    
    long long ans = countWays(index + 1, pairs);
    
    for (int i = index + 1; i < 2 * N; i++) {
        if (!visited[i] && A[index][i] == 1) {
            visited[index] = true;
            visited[i] = true;
            ans += countWays(index + 1, pairs - 1);
            visited[index] = false;
            visited[i] = false;
        }
    }
    
    return ans;
}

int main() {
    cin >> N;
    A = vector<vector<int>>(2 * N, vector<int>(2 * N));
    
    for (int i = 0; i < 2 * N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            char c;
            cin >> c;
            A[i][j] = c - '0';
        }
    }
    
    visited = vector<bool>(2 * N, false);
    
    cout << countWays(0, N) << endl;
    
    return 0;
}