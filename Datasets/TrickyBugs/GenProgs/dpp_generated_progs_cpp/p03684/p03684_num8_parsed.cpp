#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> towns(N);
    for (int i = 0; i < N; i++) {
        cin >> towns[i].first >> towns[i].second;
    }
    
    sort(towns.begin(), towns.end());
    
    int minCost = 1e9;
    for (int i = 0; i < N-1; i++) {
        int cost = town[i+1].first - town[i].first;
        minCost = min(minCost, cost);
    }
    
    cout << minCost << endl;
    
    return 0;
}