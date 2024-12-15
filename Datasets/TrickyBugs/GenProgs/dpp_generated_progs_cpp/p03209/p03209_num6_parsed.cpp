#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the total number of layers in a level-L burger
long long getTotalLayers(int L) {
    if (L == 0)
        return 1;
    else
        return pow(2, L) + 2 * getTotalLayers(L - 1);
}

// Function to calculate the number of patties in the bottom-most X layers
long long calculatePatties(int N, long long X) {
    if (N == 0)
        return 0;
    long long layers = getTotalLayers(N - 1);
    if (X == 1)
        return 0;
    else if (X <= layers + 1)
        return calculatePatties(N - 1, X - 1);
    else if (X == layers + 2)
        return 1 + calculatePatties(N - 1, X - layers - 2);
    else  // X > layers + 2
        return 1 + calculatePatties(N - 1, X - layers - 2) + calculatePatties(N - 1, layers);
}

int main() {
    int N;
    long long X;
    cin >> N >> X;
    cout << calculatePatties(N, X) << endl;
    return 0;
}
