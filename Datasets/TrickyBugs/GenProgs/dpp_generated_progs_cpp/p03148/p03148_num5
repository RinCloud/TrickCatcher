#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> sushi(N);
    for(int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
    }
    
    sort(sushi.begin(), sushi.end(), compare);
    
    map<int, int> count;
    long long baseTotalDeliciousness = 0;
    
    for(int i = 0; i < K; i++) {
        baseTotalDeliciousness += sushi[i].second;
        count[sushi[i].first]++;
    }
    
    long long varietyBonus = count.size() * count.size();
    
    long long maxSatisfaction = baseTotalDeliciousness + varietyBonus;
    
    for(int i = K; i < N; i++) {
        if(count[sushi[i].first] == 0) {
            baseTotalDeliciousness += sushi[i].second;
            count[sushi[i].first]++;
            
            while(count.size() > K) {
                baseTotalDeliciousness -= (--count.end())->second;
                count.erase(--count.end());
            }
            
            varietyBonus = count.size() * count.size();
            
            maxSatisfaction = max(maxSatisfaction, baseTotalDeliciousness + varietyBonus);
        }
    }
    
    cout << maxSatisfaction;
    
    return 0;
}