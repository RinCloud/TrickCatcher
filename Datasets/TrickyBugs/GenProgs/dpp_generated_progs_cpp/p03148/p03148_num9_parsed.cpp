#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> sushi(N);
    for(int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
    }

    sort(sushi.begin(), sushi.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    map<int, int> count;
    long long totalDeliciousness = 0;
    long long varietyBonus = 0;
    long long satisfaction = 0;

    for(int i = 0; i < K; i++) {
        int topping = sushi[i].first;
        int deliciousness = sushi[i].second;

        if(count[topping] == 0) {
            varietyBonus++;
        }
        count[topping]++;
        totalDeliciousness += deliciousness;
    }
    
    satisfaction = totalDeliciousness + varietyBonus * varietyBonus;

    for(int i = K; i < N; i++) {
        int topping = sushi[i].first;
        int deliciousness = sushi[i].second;

        if(count[topping] > 0) {
            continue;
        }

        while(count[sushi[K-1].first] > 1) {
            K--;
            totalDeliciousness -= sushi[K].second;
            count[sushi[K].first]--;
        }

        varietyBonus++;
        count[sushi[K-1].first]--;
        totalDeliciousness += deliciousness;
        satisfaction = max(satisfaction, totalDeliciousness + varietyBonus * varietyBonus);
    }

    cout << satisfaction << endl;

    return 0;
}