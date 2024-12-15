#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <utility>

using namespace std;

bool sortByDeliciousness(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<pair<int, int>> sushi(N);
    unordered_map<int, int> countTopping;
    
    for (int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
        countTopping[sushi[i].first]++;
    }
    
    sort(sushi.begin(), sushi.end(), sortByDeliciousness);
    
    long long satisfaction = 0;
    long long baseTotalDeliciousness = 0;
    int varietyBonus = 0;
    
    for (int i = 0; i < K; i++) {
        baseTotalDeliciousness += sushi[i].second;
        countTopping[sushi[i].first]--;
        
        if (countTopping[sushi[i].first] == 0) {
            varietyBonus++;
        }
    }
    
    satisfaction = baseTotalDeliciousness + (long long)(varietyBonus * varietyBonus);
    
    for (int i = K; i < N; i++) {
        if (countTopping[sushi[i].first] > 0) {
            baseTotalDeliciousness += sushi[i].second;
            countTopping[sushi[i].first]--;
            
            if (countTopping[sushi[i].first] == 0) {
                varietyBonus++;
            }
            
            int currentVarietyBonus = varietyBonus;
            
            for (int j = i + 1; j < N; j++) {
                if (countTopping[sushi[j].first] > 0) {
                    currentVarietyBonus++;
                    
                    if (currentVarietyBonus >= K) {
                        break;
                    }
                }
            }
            
            satisfaction = max(satisfaction, baseTotalDeliciousness + (long long)(currentVarietyBonus * currentVarietyBonus));
        }
    }
    
    cout << satisfaction << endl;
    
    return 0;
}