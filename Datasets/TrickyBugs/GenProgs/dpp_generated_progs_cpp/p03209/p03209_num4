#include <iostream>
#include <cmath>

using namespace std;

long long int getPatties(int level, long long int layers) {
    if (level == 0) {
        if (layers >= 1)
            return 1;
        else
            return 0;
    }
    
    long long int numLayers = pow(2, level + 1) - 3;
    long long int halfPatties = pow(2, level) - 1;
    
    if (layers <= 1)
        return 0;
    else if (layers <= numLayers / 2 + 1)
        return getPatties(level - 1, layers - 1);
    else if (layers == numLayers / 2 + 2)
        return halfPatties + 1;
    else
        return halfPatties + 1 + getPatties(level - 1, layers - (numLayers / 2 + 2));
}

int main() {
    int N;
    long long int X;
    cin >> N >> X;
    
    long long int layers = getPatties(N, X);
    cout << layers << endl;
    
    return 0;
}