#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<pair<int, int>> sushi(N);
    for (int i = 0; i < N; i++) {
        cin >> sushi[i].first >> sushi[i].second;
    }

    // Calculate the maximum nutrition taken in minus the total energy consumed
    int maxNutrition = 0;
    for (int i = 0; i < N; i++) {
        int totalNutrition = 0;
        int totalEnergy = 0;

        // Calculate the total nutrition and energy consumed from the current sushi to the end
        for (int j = i; j < N; j++) {
            totalNutrition += sushi[j].second;
            totalEnergy += sushi[j].first - (j == i ? 0 : sushi[j - 1].first);
            maxNutrition = max(maxNutrition, totalNutrition - totalEnergy);
        }

        // Calculate the total nutrition and energy consumed from the beginning to the current sushi
        totalNutrition = 0;
        totalEnergy = 0;
        for (int j = i; j >= 0; j--) {
            totalNutrition += sushi[j].second;
            totalEnergy += (j == i ? C : sushi[j + 1].first) - sushi[j].first;
            maxNutrition = max(maxNutrition, totalNutrition - totalEnergy);
        }
    }

    cout << maxNutrition << endl;

    return 0;
}