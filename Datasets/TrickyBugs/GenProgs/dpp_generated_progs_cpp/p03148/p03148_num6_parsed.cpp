#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> sushi(N);
    for (int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
    }

    sort(sushi.begin(), sushi.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    });
    
    ll base_total_deliciousness = 0;
    map<int, int> count_of_toppings;
    for (int i = 0; i < K; i++) {
        base_total_deliciousness += sushi[i].second;
        count_of_toppings[sushi[i].first]++;
    }
    
    ll variety_bonus = 0;
    int x = count_of_toppings.size();
    for (auto it = count_of_toppings.begin(); it != count_of_toppings.end(); ++it) {
        variety_bonus += 1ll * it->second * it->second;
    }
    
    ll satisfaction = base_total_deliciousness + variety_bonus;
    cout << satisfaction << endl;
    
    return 0;
}