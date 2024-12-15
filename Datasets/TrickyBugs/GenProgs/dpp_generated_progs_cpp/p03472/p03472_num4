#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, H;
    cin >> N >> H;
    
    vector<pair<int,int>> katanas;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        katanas.push_back(make_pair(a,b));
    }
    
    sort(katanas.begin(), katanas.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        return a.second > b.second;
    });
    
    int attacks = 0;
    for (int i = 0; i < N; i++) {
        if (katanas[i].second > katanas[0].first) {
            H -= katanas[i].second;
            attacks++;
        } else {
            break;
        }
        
        if (H <= 0) {
            break;
        }
    }
    
    if (H > 0) {
        attacks += (H + katanas[0].first - 1) / katanas[0].first;
    }
    
    cout << attacks << endl;
    
    return 0;
}