#include <iostream>
#include <vector>

using namespace std;

int main() {
   int N, M, Q;
   cin >> N >> M >> Q;
   
   vector<int> L(M), R(M);
   for (int i = 0; i < M; i++) {
      cin >> L[i] >> R[i];
   }
   
   vector<int> p(Q), q(Q);
   for (int i = 0; i < Q; i++) {
      cin >> p[i] >> q[i];
   }
   
   vector<vector<int>> trains(N+1, vector<int>(N+1, 0));
   for (int i = 0; i < M; i++) {
      trains[L[i]][R[i]]++;
   }
   
   vector<vector<int>> numTrains(N+1, vector<int>(N+1, 0));
   for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N; j++) {
         numTrains[i][j] = numTrains[i-1][j] + numTrains[i][j-1] - numTrains[i-1][j-1] + trains[i][j];
      }
   }
   
   for (int i = 0; i < Q; i++) {
      cout << numTrains[q[i]][q[i]] - numTrains[q[i]][p[i]-1] - numTrains[p[i]-1][q[i]] + numTrains[p[i]-1][p[i]-1] << endl;
   }
   
   return 0;
}