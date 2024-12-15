#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<pair<int, ll>> sushi(N);
    for (int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
    }
    
    sort(sushi.begin(), sushi.end(), [](const pair<int, ll>& a, const pair<int, ll>& b) {
        return a.second > b.second;
    });
    
    vector<int> count(N + 1, 0);
    ll totalDeliciousness = 0;
    ll totalVarietyBonus = 0;
    for (int i = 0; i < K; i++) {
        count[sushi[i].first]++;
        totalDeliciousness += sushi[i].second;
        totalVarietyBonus += count[sushi[i].first] == 1 ? 1 : 0;
    }
    
    ll ans = totalDeliciousness + totalVarietyBonus * totalVarietyBonus;
    
    ll currentDeliciousness = totalDeliciousness;
    ll currentVarietyBonus = totalVarietyBonus;
    for (int i = K; i < N; i++) {
        if (count[sushi[i].first] == 0) {
            count[sushi[i].first]++;
            currentDeliciousness += sushi[i].second;
            currentVarietyBonus++;
            
            while (count[sushi[K - 1].first] > 1) {
                count[sushi[K - 1].first]--;
                currentDeliciousness -= sushi[K - 1].second;
                currentVarietyBonus--;
            }
            
            ans = max(ans, currentDeliciousness + currentVarietyBonus * currentVarietyBonus);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}