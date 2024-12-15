#include <iostream>
#include <cmath>

using namespace std;

long long countPatties(int level, long long layers) {
    if (level == 0) {
        return min(layers, (long long) 1);
    }
    
    long long numLayers = pow(2, level + 2) - 3;
    long long halfLayers = numLayers / 2;
    
    if (layers == 1) {
        return 0;
    } else if (layers <= halfLayers + 1) {
        return countPatties(level - 1, layers - 1);
    } else if (layers == halfLayers + 2) {
        return halfLayers + 1;
    } else {
        return countPatties(level - 1, halfLayers) + 1 + countPatties(level - 1, layers - halfLayers - 2);
    }
}

int main() {
    int N;
    long long X;
    cin >> N >> X;

    long long result = countPatties(N, X);
    
    cout << result << endl;
    
    return 0;
}