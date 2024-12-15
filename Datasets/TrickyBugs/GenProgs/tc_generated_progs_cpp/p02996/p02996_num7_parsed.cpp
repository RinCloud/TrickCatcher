#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> p; // Fixing the default priority queue to min heap
  for(int i=0;i<n;i++){
    int a,b;
    cin >> a >> b;
    p.emplace(b,a);
  }
  int t = 0; // Changing the initial time to be 0
  while(!p.empty()){
    pair<int,int> s=p.top();
    p.pop();
    t += s.second; // Incrementing time by the time of the current job
    if(t > s.first){ // Checking if the deadline has passed
        cout << "No" << endl;
        return 0;
    }
  }
  cout << "Yes" << endl; // If all jobs can be completed within their deadlines
}
