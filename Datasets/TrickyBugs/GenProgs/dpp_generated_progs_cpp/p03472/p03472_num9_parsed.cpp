#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, H;
    cin >> N >> H;
    
    vector<pair<int, int>> katanas(N);
    for(int i=0; i<N; i++){
        cin >> katanas[i].first >> katanas[i].second;
    }
    
    sort(katanas.rbegin(), katanas.rend(), [](pair<int, int>& a, pair<int, int>& b){
        return a.first - a.second < b.first - b.second;
    });
    
    int ans = 0;
    for(int i=0; i<N; i++) {
        if(H <= 0) break;
        if(katanas[i].first >= katanas[i].second) {
            ans += (H + katanas[i].first - 1) / katanas[i].first;
            break;
        } else {
            ans += 1;
            H -= katanas[i].second;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}