#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
vector<pii>V[110000], T, S;
long long sumT[110000], sumS[110000];


int main(){
  int N,K,t;
  long long d;
  cin>>N>>K;
  for(int i=0;i<N;i++){
    cin>>t>>d;
    t--;
    V[t].push_back(make_pair(d, i));
  }

  for(int i=0;i<N;i++){
    sort(V[i].rbegin(),V[i].rend());
  }

  priority_queue<pii,vector<pii>,greater<pii>> PQ;
  priority_queue<pii>PQ2;

  long long sum = 0;
  int kinds = 0;
  for(int i=0;i<K;i++){
    for(auto p : V[i]){
      sum += p.first;
      if(kinds<K-1){
        kinds++;
        PQ.push(p);
      }else{
        PQ2.push(p);
      }
    }
  }
  long long ans = sum + (long long)kinds*kinds;
  for(int i=K;i<N;i++){
    for(auto p : V[i]){
      PQ2.push(p);
    }
  }

  while(PQ.size()){
    sumT[PQ.size()] = sumT[PQ.size()-1] + PQ.top().first;
    PQ.pop();
  }
  while(PQ2.size()){
    sumS[PQ2.size()] = sumS[PQ2.size()-1] + PQ2.top().first;
    PQ2.pop();
  }
  for(int i=0;i<=K;i++){
    ans = max(ans, sumT[i] + sumS[K-i] + (long long)i*i);
  }

  cout<<ans<<endl;
}