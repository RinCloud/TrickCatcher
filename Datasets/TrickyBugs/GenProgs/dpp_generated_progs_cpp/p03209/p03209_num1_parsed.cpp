#include <iostream>
#include <cmath>

using namespace std;

long long calculatePatties(int level, long long layers) {
    if (level == 0) {
        return 0;
    }
    long long total_layers = pow(2, level + 1) - 3;
    if (layers <= 1) {
        return 0;
    } else if (layers <= total_layers) {
        return calculatePatties(level - 1, layers - 1);
    } else if (layers == total_layers + 1) {
        return calculatePatties(level - 1, layers - 1) + 1;
    } else {
        return calculatePatties(level - 1, total_layers) + 1 + calculatePatties(level - 1, layers - total_layers - 1);
    }
}

int main() {
    int N;
    long long X;
    cin >> N >> X;

    long long result = calculatePatties(N, X);
    cout << result << endl;
    
    return 0;
}
