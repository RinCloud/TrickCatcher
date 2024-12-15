#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> chairs(N);
    for(int i=0; i<N; i++) {
        cin >> chairs[i].first >> chairs[i].second;
    }
    
    sort(chairs.begin(), chairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    
    int res = 0;
    int max_right = 0;
    for(int i=0; i<N; i++) {
        if(chairs[i].first > max_right) {
            res += chairs[i].first - max_right;
        }
        max_right = max(max_right, chairs[i].second);
    }
    
    res += M - max_right;
    
    cout << res;
    
    return 0;
}