#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> x(N);
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> v[i];
    }

    // Calculate the maximum nutrition taken in minus the total energy consumed
    int maxNutrition = 0;
    int totalEnergyConsumed = 0;

    // Track the maximum nutrition from left to right
    vector<int> maxNutritionLeft(N);
    int accumulatedNutrition = 0;
    for (int i = 0; i < N; i++) {
        accumulatedNutrition += v[i] - (x[i] - (i > 0 ? x[i-1] : 0));
        maxNutritionLeft[i] = max(accumulatedNutrition, maxNutrition);
    }

    // Track the maximum nutrition from right to left
    vector<int> maxNutritionRight(N);
    accumulatedNutrition = 0;
    for (int i = N-1; i >= 0; i--) {
        accumulatedNutrition += v[i] - ((i < N-1 ? x[i+1] : C) - x[i]);
        maxNutritionRight[i] = max(accumulatedNutrition, maxNutrition);
    }

    // Calculate the maximum nutrition taken in minus the total energy consumed at each point
    for (int i = 0; i < N; i++) {
        maxNutrition = max(maxNutrition, maxNutritionLeft[i]);
        maxNutrition = max(maxNutrition, maxNutritionRight[i]);
        int energyConsumedLeft = x[i] + maxNutritionLeft[i];
        int energyConsumedRight = C - x[i] + maxNutritionRight[i];
        totalEnergyConsumed = max(totalEnergyConsumed, energyConsumedLeft);
        totalEnergyConsumed = max(totalEnergyConsumed, energyConsumedRight);
    }

    int result = maxNutrition - totalEnergyConsumed;
    cout << result << endl;

    return 0;
}