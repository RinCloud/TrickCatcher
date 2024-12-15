#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> x(N);
    for(int i=0; i<N; i++) {
        cin >> x[i];
    }
  
    int total_dist = 0;
  
    for(int i=0; i<N; i++) {
        int dist = min(abs(x[i] - 0), abs(x[i] - K));
        total_dist += dist * 2;
    }
  
    cout << total_dist << endl;
  
    return 0;
}