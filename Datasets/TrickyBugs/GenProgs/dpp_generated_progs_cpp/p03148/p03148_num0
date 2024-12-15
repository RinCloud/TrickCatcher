#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

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
    
    long long base_total_deliciousness = 0;
    map<int, int> kinds_count;
    long long variety_bonus = 0;
    long long max_satisfaction = 0;
    
    for (int i = 0; i < K; i++) {
        base_total_deliciousness += sushi[i].second;
        kinds_count[sushi[i].first]++;
        variety_bonus = (long long)kinds_count.size() * kinds_count.size();
        max_satisfaction = max(max_satisfaction, base_total_deliciousness + variety_bonus);
    }
    
    cout << max_satisfaction << endl;
    
    return 0;
}