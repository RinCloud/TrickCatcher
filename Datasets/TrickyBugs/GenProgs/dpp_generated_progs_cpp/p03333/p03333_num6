#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> segments(N);
    for (int i = 0; i < N; i++) {
        cin >> segments[i].first >> segments[i].second;
    }
    
    sort(segments.begin(), segments.end());
    
    long long int K = 0;
    for (int i = 0; i < N; i++) {
        K += segments[i].second - segments[i].first;
    }
    
    cout << K << endl;
    
    return 0;
}