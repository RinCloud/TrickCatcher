#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<pair<int, int>> jobs(N);
  for(int i=0; i<N; i++) {
    cin >> jobs[i].first >> jobs[i].second;
  }
  
  sort(jobs.begin(), jobs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
  });
  
  long long int time = 0;
  for(int i=0; i<N; i++) {
    time += jobs[i].first;
    if(time > jobs[i].second) {
      cout << "No";
      return 0;
    }
  }
  
  cout << "Yes";
  
  return 0;
}