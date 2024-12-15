#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> flags(N);
    
    for(int i = 0; i < N; i++) {
        cin >> flags[i].first >> flags[i].second;
    }
    
    sort(flags.begin(), flags.end(), cmp);
    
    int max_distance = 0;
    
    for(int i = 1; i < N; i++) {
        int distance = min(flags[i].first - flags[i-1].first, flags[i].second - flags[i-1].second);
        max_distance = max(max_distance, distance);
    }
    
    cout << max_distance << endl;
    
    return 0;
}