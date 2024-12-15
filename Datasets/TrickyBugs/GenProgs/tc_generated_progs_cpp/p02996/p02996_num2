#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  priority_queue<pair<int,int>> p;
  for(int i=0;i<n;i++){
    int a,b;
    cin >> a >> b;
    p.emplace(make_pair(b,a)); // Fix: Changed p.emplace(b,a) to p.emplace(make_pair(b,a))
  }
  int t=1000000000;
  while(!p.empty()){
    pair<int,int> s=p.top();
    p.pop();
    t=min(t,s.first);
    t-=s.second;
    if(t < 0) { // Fix: Added checking if time becomes negative during processing jobs
        break;
    }
  }
  if(t>=0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}