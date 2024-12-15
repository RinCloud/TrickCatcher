#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  priority_queue<pair<int,int>> p;
  for(int i=0;i<n;i++){
    int a,b;
    cin >> a >> b;
    p.emplace(b,a);
  }
  long long t=0;
  while(!p.empty()){
    pair<int,int> s=p.top();
    p.pop();
    t+=s.second;
    if(t > s.first){
        cout << "No" << endl;
        return 0;
    }
  }
  cout << "Yes" << endl;
}
