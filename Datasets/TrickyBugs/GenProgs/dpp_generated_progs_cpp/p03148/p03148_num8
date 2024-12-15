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

    long long totalDeliciousness = 0;
    map<int, int> frequency;
    long long varietyBonus = 0;
    int kindCount = 0;

    for (int i = 0; i < K; i++) {
        totalDeliciousness += sushi[i].second;
        if (frequency[sushi[i].first] == 0) {
            kindCount++;
        }
        frequency[sushi[i].first]++;
    }

    varietyBonus = kindCount * kindCount;

    long long maxSatisfaction = totalDeliciousness + varietyBonus;

    for (int i = K; i < N; i++) {
        if (frequency[sushi[i].first] == 0) {
            totalDeliciousness += sushi[i].second;
            frequency[sushi[i].first]++;
            kindCount++;
            varietyBonus = kindCount * kindCount;
            maxSatisfaction = max(maxSatisfaction, totalDeliciousness + varietyBonus);
        }
    }

    cout << maxSatisfaction << endl;

    return 0;
}