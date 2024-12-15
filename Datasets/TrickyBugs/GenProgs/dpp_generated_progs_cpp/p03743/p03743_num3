#include <iostream>
#include <vector>
using namespace std;

int main() {
   int N, D;
   cin >> N >> D;

   vector<int> distances(N);
   for (int i = 0; i < N; i++) {
       cin >> distances[i];
   }

   int Q;
   cin >> Q;

   vector<int> queries(Q);
   for (int i = 0; i < Q; i++) {
       cin >> queries[i];
   }

   vector<int> prefixSum(N + 1, 0);
   for (int i = 1; i <= N; i++) {
       prefixSum[i] = prefixSum[i - 1] + distances[i - 1];
   }

   int currentPos = 0;
   for (int i = 0; i < Q; i++) {
       int idx = queries[i];
       int diff = distances[idx - 1] - currentPos;
       if (diff >= 0 && prefixSum[N] - prefixSum[idx - 1] + prefixSum[idx - 2] <= D) {
           cout << "YES" << endl;
       } else if (diff >= 0 && (prefixSum[N] - prefixSum[N - 1] <= D || prefixSum[idx - 2] <= D)) {
           cout << "YES" << endl;
       } else {
           cout << "NO" << endl;
       }
   }

   return 0;
}