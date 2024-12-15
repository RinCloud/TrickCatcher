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

    // Prefix sum arrays to store the total nutrition and energy consumed at each sushi position
    vector<int> prefixNutrition(N+1, 0);
    vector<int> prefixEnergy(N+1, 0);
    for (int i = 0; i < N; i++) {
        prefixNutrition[i+1] = prefixNutrition[i] + v[i];
        prefixEnergy[i+1] = prefixEnergy[i] + (x[i+1] - x[i]);
    }
    
    int maxNutrition = 0;
    // Going around the counter in both clockwise and counterclockwise directions
    for (int i = 0; i < N; i++) {
        int pos1 = x[i];
        int pos2 = C - x[i];
        
        // Finding the maximum nutrition in clockwise direction
        int nutrition1 = prefixNutrition[i+1] - prefixEnergy[i+1];
        if (pos1 <= x[i]) {
            nutrition1 += prefixEnergy[N] - prefixEnergy[i+1] + prefixNutrition[N];
        }

        // Finding the maximum nutrition in counterclockwise direction
        int nutrition2 = prefixNutrition[N] - prefixNutrition[i+1] + prefixEnergy[i+1];
        if (pos2 <= x[i]) {
            nutrition2 += prefixEnergy[i+1];
        }
        
        maxNutrition = max(maxNutrition, max(nutrition1, nutrition2));
    }
    
    cout << maxNutrition << endl;
    
    return 0;
}