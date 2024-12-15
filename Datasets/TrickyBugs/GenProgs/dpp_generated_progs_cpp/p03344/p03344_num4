#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  vector<long long> A(N);
  vector<long long> B(N);
  vector<vector<int>> adj(N);
  vector<bool> visited(N, false);
  
  for(int i=0; i<N; i++) {
    cin >> A[i] >> B[i];
  }
  
  for(int i=0; i<M; i++) {
    int U, V;
    cin >> U >> V;
    U--; V--;
    adj[U].push_back(V);
    adj[V].push_back(U);
  }
  
  long long minMoney = LLONG_MAX;
  
  for(int start=0; start<N; start++) {
    queue<pair<int, long long>> q;
    q.push({start, A[start]});
    vector<long long> money(N, -1);
    money[start] = A[start];
    
    while(!q.empty()) {
      int curr = q.front().first;
      long long currMoney = q.front().second;
      q.pop();
      
      if(visited[curr]) {
        continue;
      }
      visited[curr] = true;
      
      if(curr != start && money[curr] <= B[curr]) {
        minMoney = min(minMoney, currMoney);
      }
      
      for(int next : adj[curr]) {
        if(!visited[next] && currMoney >= A[next]) {
          if(money[next] == -1 || currMoney >= money[next]) {
            money[next] = currMoney;
            q.push({next, currMoney});
          }
        }
      }
    }
    
    fill(visited.begin(), visited.end(), false);
  }
  
  cout << minMoney << endl;
  
  return 0;
}