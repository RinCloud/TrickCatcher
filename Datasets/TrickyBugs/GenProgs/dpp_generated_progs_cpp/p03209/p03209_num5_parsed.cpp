#include <iostream>
#include <cmath>

using namespace std;

long long calculatePatties(int level, long long layers) {
    if (level == 0) {
        return layers > 0 ? 1 : 0;
    }

    long long previousLayers = pow(2, level) - 3;
    long long totalLayers = pow(2, level + 1) - 3;

    if (layers <= 1)
        return 0;
    else if (layers <= previousLayers + 1)
        return calculatePatties(level - 1, layers - 1);
    else if (layers == previousLayers + 2)
        return 1 + calculatePatties(level - 1, layers - 2);
    else if (layers <= totalLayers)
        return pow(2, level - 1) + calculatePatties(level - 1, layers - previousLayers - 2);
    else
        return pow(2, level);
}

int main() {
    int N;
    long long X;
    cin >> N >> X;

    long long result = calculatePatties(N, X);
    cout << result << endl;

    return 0;
}