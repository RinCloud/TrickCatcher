#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> x(N);
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> v[i];
    }

    vector<int> left(N+1, 0);
    vector<int> right(N+1, 0);

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < N; i++) {
        sum1 += v[i];
        left[i+1] = max(left[i], sum1 - x[i]);
    }
    for (int i = N-1; i >= 0; i--) {
        sum2 += v[i];
        right[i] = max(right[i+1], sum2 - (C - x[i]));
    }

    int maxNutrition = 0;
    for (int i = 0; i <= N; i++) {
        maxNutrition = max(maxNutrition, left[i]);
        maxNutrition = max(maxNutrition, right[i]);
        maxNutrition = max(maxNutrition, left[i] + right[i]);
    }

    cout << maxNutrition << endl;

    return 0;
}