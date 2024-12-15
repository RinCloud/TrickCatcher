#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<pair<int, int>> sushi(N);
    for (int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
    }
    
    sort(sushi.begin(), sushi.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    
    unordered_map<int, int> count;
    long long baseTotalDeliciousness = 0;
    long long varietyBonus = 0;
    
    for (int i = 0; i < K; i++) {
        baseTotalDeliciousness += sushi[i].second;
        count[sushi[i].first]++;
    }
    
    for (auto& p : count) {
        varietyBonus += p.second * p.second;
    }
    
    long long satisfaction = baseTotalDeliciousness + varietyBonus;
    cout << satisfaction << endl;
    
    return 0;
}